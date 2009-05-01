/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetFontForTest.h"

CnetFontForTest::CnetFontForTest(CnetColor color)
	:CnetFont(color)
{
}

CnetFontForTest::CnetFontForTest(CnetFontForTest & font)
	:CnetFont(font)
{
}

CnetFontForTest::~CnetFontForTest()
{
}

unsigned int CnetFontForTest::printChar(CnetImage & image,unsigned int x,unsigned int y,char character)
{
	image.square(x,y,4,4,color,color);
	return 5;
}

unsigned int CnetFontForTest::getCharWidth()
{
	return 5;
}

unsigned int CnetFontForTest::getCharHeight()
{
	return 4;
}
