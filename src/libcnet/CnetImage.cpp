/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetImage.h"
#include <assert.h>
#include "CnetImageToAscii.h"


#define min(x,y) (((x)<(y))?(x):(y))
#define max(x,y) (((x)>(y))?(x):(y))

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetImage::CnetImage(unsigned int width,unsigned int height,CnetColor background)
{
	this->init(width,height);
	this->clear(background);
}

CnetImage::CnetImage(const CnetImage & image)
{
	this->init(image.width,image.height);
	for (unsigned long i=0;i<image.width*image.height;i++)
		this->bitmap[i]=image.bitmap[i];
}

/*******************************************
              DESTRUCTEUR
*******************************************/
CnetImage::~CnetImage(void)
{
	delete [] this->bitmap2D;
	delete [] this->bitmap;
}

/*******************************************
                getPixel
*******************************************/
CnetColor CnetImage::getPixel(unsigned int x,unsigned int y) const throw (CnetOutOfBoundException)
{
	//erreur
	assert(this->bitmap!=NULL);

	//check
	this->checkCoordWithException(x,y);

	return this->bitmap2D[y][x];
}

/*******************************************
                 setPixel
*******************************************/
void CnetImage::setPixel(unsigned int x,unsigned int y,CnetColor color) throw (CnetOutOfBoundException)
{
	//erreur
	assert(this->bitmap!=NULL);

	//check
	this->checkCoordWithException(x,y);

	this->bitmap2D[y][x]=color;
}

/*******************************************
                  clear
*******************************************/
void CnetImage::clear(CnetColor color)
{
	//erreur
	assert(this->bitmap!=NULL);

	union T {CnetColor cols[sizeof(unsigned int)];unsigned int value;};
	assert(sizeof(T)==sizeof(unsigned int));
	T tmp;
	for (unsigned char i=0;i<sizeof(T);i++)
		tmp.cols[i]=color;

	const unsigned long size=this->width * this->height;
	for (unsigned long i=0;i<size/sizeof(T)+1;i++)
		((T*)this->bitmap)[i].value=tmp.value;
}

/*******************************************
                  line
*******************************************/
void CnetImage::line(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2,CnetColor color)
{
	//erreur
	assert(this->bitmap!=NULL);

	//si x1 > x2 on inverse les points
	if (x1 > x2 || (x1==x2 && y1 > y2))
	{
		permut(x1,x2);
		permut(y1,y2);
	}

	int dx,dy,x,y ;
	x = x1 ;
	y = y1 ;
	dx = x2 - x1 ;
	dy = y2 - y1 ;

	if (x1 < x2)
		this->bresenhamLine(x,x2,y,dx,dy,color);
	else if (y1 < y2)
		this->bresenhamLine(y,y2,x,dy,dx,color,true);
	else if (dx==0 && dy==0)
		this->setPixel(x1,x2,color);
	else
		assert(false);
}

/*******************************************
               bresenhamLine
*******************************************/
void CnetImage::bresenhamLine(unsigned int x,unsigned int xmax,unsigned int y,int dx,int dy,CnetColor color,bool permutXY)
{
	if (permutXY) {
		if (checkCoord(y,x)) bitmap2D[x][y]=color;
		if (xmax>=height) xmax=height;
	} else {
		if (checkCoord(x,y)) bitmap2D[y][x]=color;
		if (xmax>=width) xmax=width;
	}
	int cumul = dx / 2 ;
	for ( x = x+1 ; x <= xmax ; x++ )
	{
		cumul += dy ;
		if (dy>=0)
		{
			if (cumul >= dx)
			{
				cumul -= dx ;
				y += 1 ;
			}
		} else {
			if (cumul <= dx)
			{
				cumul -= dx ;
				y -= 1 ;
			}
		}
		if (permutXY) {
			if (checkCoord(y,x)) bitmap2D[x][y]=color;
		} else {
			if (checkCoord(x,y)) bitmap2D[y][x]=color;
		}
	}
}

/*******************************************
                square
*******************************************/
void CnetImage::square(unsigned int x0, unsigned int y0, unsigned int width, unsigned int height, CnetColor borderColor ,CnetColor backgroundColor)
{
	const unsigned int lwidth = min(x0+width,this->width);
	const unsigned int lwidthInner = min(x0+width-1,this->width);
	const unsigned int lheight = min(y0+height-1,this->height);
	//on limiter les déréférencement
	CnetColor * line1=this->bitmap2D[y0];
	//ligne supérieur
	if (y0+height-1<this->height)
	{
		CnetColor * line2=this->bitmap2D[y0+height-1];
		for(unsigned int x=x0;x<lwidth;x++)
		{
			line1[x]=borderColor;
			line2[x]=borderColor;
		}
	} else {
		for(unsigned int x=x0;x<lwidth;x++)
			line1[x]=borderColor;
	}
	//intérieur
	for (unsigned int y=y0+1;y<lheight;y++)
	{
		if (checkCoord(x0,y))
			this->bitmap2D[y][x0]=borderColor;
		line1 = this->bitmap2D[y];
		for (unsigned int x=x0+1;x<lwidthInner;x++)
			line1[x]=backgroundColor;
		if (checkCoord(x0+width-1,y))
			this->bitmap2D[y][x0+width-1]=borderColor;
	}
}

/*******************************************
           paintImage
*******************************************/
void CnetImage::paintImage(const CnetImage & image,unsigned int x,unsigned int y)
{
	CnetSquare square = {0,0,image.width,image.height};
	//on ajuste dans pour rester sur l'image
	if (this->fitToCurrentPicture(x,y,square)==false)
		return;
	
	//on dessine
	this->realPaintImage(image,x,y,square);
}


void CnetImage::paintImage(const CnetImage & image,unsigned int x,unsigned int y,CnetSquare square)
{
	//check orig
	if ((int)square.x<0) {square.x = 0; x-=(int)square.x;}
	if ((int)square.y<0) {square.y = 0; y-=(int)square.y;}
	square.width+=square.x;
	square.height+=square.y;
	//on check les dépassement
	if (square.width>image.width) square.width=image.width;
	if (square.height>image.height) square.height=image.height;
	//on ajuste dans pour rester sur l'image
	if (this->fitToCurrentPicture(x,y,square)==false)
		return;
	
	//on dessine
	this->realPaintImage(image,x,y,square);
}

/*******************************************
           realPaintImage
*******************************************/
void CnetImage::realPaintImage(const CnetImage & image,unsigned int x,unsigned int y,CnetSquare square)
{
	CnetColor * line1;
	CnetColor * line2;
	for (unsigned int dy =square.y;dy<square.height;dy++)
	{
		line1 = this->bitmap2D[y+dy];
		line2 = image.bitmap2D[dy];
		for (unsigned int dx = square.x;dx<square.width;dx++)
			line1[x+dx]=line2[dx];
	}
}

/*******************************************
           fitToCurrentPicture
*******************************************/
bool CnetImage::fitToCurrentPicture(unsigned int & x,unsigned int & y,CnetSquare & square) const
{
	//on check les dépassement
	if ((x>width && x+square.width>width) || (y>height && y+square.height>height))
		return false;
	//on calcule les limite à droite et bas
	square.width = min(square.width,width-x);
	square.height = min(square.height,height-y);
	//limite à gauche
	if ((int)x < 0)
		square.x-=x;
	if ((int)y < 0)
		square.y-=y;

	//c'est bon
	return true;
}

/*******************************************
             getWidth
*******************************************/
unsigned int CnetImage::getWidth() const
{
	return this->width;
}

/*******************************************
                getHeight
*******************************************/
unsigned int CnetImage::getHeight() const
{
	return this->height;
}

/*******************************************
                  init
*******************************************/
void CnetImage::init(unsigned int width,unsigned int height)
{
	this->bitmap = new CnetColor[width*height+sizeof(unsigned long)];
	this->bitmap2D = new CnetColor*[height];
	for (unsigned int i=0;i<height;i++)
		this->bitmap2D[i]=this->bitmap+width*i;
	this->width = width;
	this->height = height;
}

/*******************************************
                checkCoord
*******************************************/
inline bool CnetImage::checkCoord(unsigned int x,unsigned int y) const
{
	return (x<this->width && y<this->height);
}

/*******************************************
         checkCoordWithException
*******************************************/
inline bool CnetImage::checkCoordWithException(unsigned int x,unsigned int y) const  throw (CnetOutOfBoundException)
{
	//erreurs
	if (x>=width) throw CnetOutOfBoundException("Coordonnée x invalide pour l'image courrante.",x,0,width);
	if (y>=height) throw CnetOutOfBoundException("Coordonneé y invalide pour l'image courrante.",y,0,height);

	return true;
}

/*******************************************
                  coord
*******************************************/
inline unsigned int CnetImage::coord(unsigned int x,unsigned int y) const throw (CnetOutOfBoundException)
{
	//erreurs
	//if (x>width) throw CnetOutOfBoundException("Coordonnée x invalide pour l'image courrante.",x,0,width);
	//if (y>height) throw CnetOutOfBoundException("Coordonneé y invalide pour l'image courrante.",y,0,height);
	//on calcule
	return x+y*width;
}

/*******************************************
                  permut
*******************************************/
template<class T> void CnetImage::permut(T & a,T & b)
{
	T tmp=a;
	a=b;
	b=tmp;
}

/*******************************************
                  toAscii
*******************************************/
CnetString CnetImage::toAscii(bool border) const
{
	CnetString res;
	//largeur de l'image + deux pixel de bordure si activé + \n + \0
	char buffer[this->width+4];
	char borderBuffer[this->width+4];

	//bordure haute
	if (border)
	{
		borderBuffer[0]='+';

		for (unsigned int i=1;i<=this->width;i++)
			borderBuffer[i]='-';
		borderBuffer[this->width+1]='+';
		borderBuffer[this->width+2]='\n';
		borderBuffer[this->width+3]='\0';
		res=borderBuffer;
	}

	//on converti l'image
	for (unsigned int y=0;y<height;y++)
	{
		unsigned int i=0;
		unsigned int offset=coord(0,y);
		if (border) buffer[i++]='|';
		for (unsigned int x=0;x<width;x++)
			buffer[i++]=CNET_COLOR_TO_ASCII[bitmap[offset+x]];
		if (border) buffer[i++]='|';
		buffer[i++]='\n';
		buffer[i++]='\0';

		res+=buffer;
	}

	//bordure basse
	if (border)
		res+=borderBuffer;
	return res;
}

/*******************************************
                compare
*******************************************/
bool CnetImage::compare(const CnetImage & image) const
{
	//trivial
	if (this == &image)
		return true;
	//trivial
	if (this->width!=image.width || this->height!=image.height)
		return false;
	//contenu
	for (unsigned long i=0;i<this->width*this->height;i++)
		if (this->bitmap[i]!=image.bitmap[i])
			return false;
	//c'est bon
	return true;
}

/*******************************************
           EXTERNAL OPERATOR ==
*******************************************/
bool operator == (const CnetImage & img1,const CnetImage & img2)
{
	return img1.compare(img2);
}

/*******************************************
           EXTERNAL OPERATOR !=
*******************************************/
bool operator != (const CnetImage & img1,const CnetImage & img2)
{
	return !img1.compare(img2);
}
