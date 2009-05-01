/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_FONT_SIMPLE_H
#define CNET_FONT_SIMPLE_H

#include "CnetFont.h"

class CnetFontSimple : public CnetFont
{
	public:
		CnetFontSimple(CnetColor color=CNET_BLACK_COLOR);
		CnetFontSimple(const CnetFontSimple & font);
		virtual ~CnetFontSimple();
		virtual unsigned int printChar(CnetImage & image,unsigned int x,unsigned int y,char character);
		virtual unsigned int getCharWidth();
		virtual unsigned int getCharHeight();
};

#endif
