/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_FONT_H
#define CNET_FONT_H

#include "CnetImage.h"
#include "CnetExceptions.h"

class CnetFont
{
	public:
		CnetFont(CnetColor color=CNET_BLACK_COLOR);
		CnetFont(const CnetFont & font);
		virtual ~CnetFont();
		CnetColor getColor() const;
		void setColor(CnetColor color);
		virtual void print(CnetImage & image,unsigned int x,unsigned int y,const CnetString text);
		virtual void print(CnetImage & image,unsigned int x,unsigned int y,const char * text);
		virtual unsigned int printChar(CnetImage & image,unsigned int x,unsigned int y,char character)=0;
		virtual unsigned int getCharWidth()=0;
		virtual unsigned int getCharHeight()=0;
	protected:
		virtual void setPixel(CnetImage & image,unsigned int x,unsigned int y,CnetColor color);
		CnetColor color;
};

#endif
