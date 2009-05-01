/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_FONT_FOR_TEST_H
#define CNET_FONT_FOR_TEST_H

#include "CnetFont.h"

class CnetFontForTest : public CnetFont
{
	public:
		CnetFontForTest(CnetColor color=CNET_BLACK_COLOR);
		CnetFontForTest(CnetFontForTest & font);
		virtual ~CnetFontForTest();
		virtual unsigned int printChar(CnetImage & image,unsigned int x,unsigned int y,char character);
		virtual unsigned int getCharWidth();
		virtual unsigned int getCharHeight();
};

#endif
