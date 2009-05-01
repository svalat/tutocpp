/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetFont.h"

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetFont::CnetFont(CnetColor color)
{
	this->color=color;
}

CnetFont::CnetFont(const CnetFont & font)
{
	this->color=font.color;
}

/*******************************************
             DESTRUCTEUR
*******************************************/
CnetFont::~CnetFont()
{
}

/*******************************************
             print
*******************************************/
void CnetFont::print(CnetImage & image,unsigned int x,unsigned int y,const char * text)
{
	while (*text!='\0')
		x+=this->printChar(image,x,y,*(text++));
}

void CnetFont::print(CnetImage & image,unsigned int x,unsigned int y,const CnetString text)
{
	for (unsigned int i=0;i<text.getSize();i++)
		x+=this->printChar(image,x,y,text[i]);
}

/*******************************************
             setPixel
*******************************************/
void CnetFont::setPixel(CnetImage & image,unsigned int x,unsigned int y,CnetColor color)
{
	try {
		image.setPixel(x,y,color);
	} catch (CnetOutOfBoundException e) {
		//on tolère les dépassement d'image
	}
}

/*******************************************
             getColor
*******************************************/
CnetColor CnetFont::getColor() const
{
	return this->color;
}

/*******************************************
             setColor
*******************************************/
void CnetFont::setColor(CnetColor color)
{
	this->color=color;
}
