/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetFontSimple.h"
#include "font.h"

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetFontSimple::CnetFontSimple(CnetColor color)
	:CnetFont(color)
{
}

CnetFontSimple::CnetFontSimple(const CnetFontSimple & font)
	:CnetFont(font)
{
}

/*******************************************
              DESTRUCTEUR
*******************************************/
CnetFontSimple::~CnetFontSimple()
{
}

/*******************************************
                 print
*******************************************/
unsigned int CnetFontSimple::printChar(CnetImage & image,unsigned int x,unsigned int y,char character)
{
	unsigned int offset=character * SVFONT_CHAR_WIDTH * SVFONT_CHAR_HEIGHT;
	
	for (unsigned int py=0;py<SVFONT_CHAR_HEIGHT;py++)
	{
		for (unsigned int px=0;px<SVFONT_CHAR_WIDTH;px++)
		{
			if(SVFONT[offset+px*SVFONT_CHAR_WIDTH+SVFONT_CHAR_HEIGHT-py-1]==255)
				this->setPixel(image,px+x,py+y,color);
		}
	}
	return SVFONT_CHAR_WIDTH;
}

/*******************************************
                 getCharWidth
*******************************************/
unsigned int CnetFontSimple::getCharWidth()
{
	return SVFONT_CHAR_WIDTH;
}

/*******************************************
                 getCharWidth
*******************************************/
unsigned int CnetFontSimple::getCharHeight()
{
	return SVFONT_CHAR_HEIGHT;
}
