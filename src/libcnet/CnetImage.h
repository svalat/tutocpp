/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_IMAGE_H
#define CNET_IMAGE_H

#include "CnetExceptions.h"
#include "CnetString.h"

typedef unsigned char CnetColor;

//quelques constantes utiles
const CnetColor CNET_WHITE_COLOR = 0xFF;
const CnetColor CNET_GRAY_COLOR  = 0x80;
const CnetColor CNET_BLACK_COLOR = 0x00;

class CnetImage
{
	public:
		CnetImage(unsigned int width,unsigned int height,CnetColor background=CNET_WHITE_COLOR);//tested
		CnetImage(const CnetImage & image);//tested
		virtual ~CnetImage(void);//ok
		CnetColor getPixel(unsigned int x,unsigned int y) const throw (CnetOutOfBoundException);//tested
		void setPixel(unsigned int x,unsigned int y,CnetColor color) throw (CnetOutOfBoundException);//tested
		void clear(CnetColor color);//tested
		void line(unsigned int x1,unsigned int y1,unsigned int x2,unsigned int y2,CnetColor color=CNET_BLACK_COLOR);//tested
		void square(unsigned int x, unsigned int y , unsigned int width, unsigned int height, CnetColor borderColor=CNET_BLACK_COLOR ,CnetColor backgroundColor=CNET_GRAY_COLOR);
		void paintImage(const CnetImage & image,unsigned int x,unsigned int y);
		unsigned int getWidth() const;//tested
		unsigned int getHeight() const;//tested
		CnetString toAscii(bool border=false) const;//tested

		//OPTIONNEL
		friend bool operator == (const CnetImage & img1,const CnetImage & img2);
		friend bool operator != (const CnetImage & img1,const CnetImage & img2);
	protected:
		inline bool checkCoord(unsigned int x,unsigned int y) const;
		inline bool checkCoordWithException(unsigned int x,unsigned int y) const  throw (CnetOutOfBoundException);
	private:
		CnetColor * bitmap;
		CnetColor ** bitmap2D;
		unsigned int width;
		unsigned int height;

		void init(unsigned int width,unsigned int height);//ok
		void bresenhamLine(unsigned int xmin,unsigned int xmax,unsigned int y,int dx,int dy,CnetColor color,bool permutXY=false);
		template<class T> static inline void permut(T & a,T & b);//ok
		bool compare(const CnetImage & image) const;

		//OPTIONNEL
		inline unsigned int coord(unsigned int x,unsigned int y) const throw (CnetOutOfBoundException);//ok
};

#endif
