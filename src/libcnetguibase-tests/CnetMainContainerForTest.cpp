/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetMainContainerForTest.h"

CnetMainContainerForTest::CnetMainContainerForTest(unsigned int width,unsigned int height)
	:CnetMainContainer(width,height),screen(width,height)
{
}

CnetMainContainerForTest::~CnetMainContainerForTest()
{
}

void CnetMainContainerForTest::redrawOnScreen()
{
	this->screen.paintImage(*this->image,0,0);
}

const CnetImage & CnetMainContainerForTest::getScreen() const
{
	return this->screen;
}
