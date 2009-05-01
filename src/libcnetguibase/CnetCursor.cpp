/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetCursor.h"


CnetCursor::CnetCursor(CnetWidget * parent)
	:CnetWidget(parent,4,4)
{
	this->setZIndex(CNET_ZINDEX_MAX);
	this->setEnable(false);
}

CnetCursor::~CnetCursor()
{
}

void CnetCursor::redraw(void)
{
	this->image->setPixel(0,0,CNET_BLACK_COLOR);
	this->image->setPixel(0,1,CNET_BLACK_COLOR);
	this->image->setPixel(0,2,CNET_BLACK_COLOR);
	this->image->setPixel(1,0,CNET_BLACK_COLOR);
	this->image->setPixel(2,0,CNET_BLACK_COLOR);
	this->image->setPixel(1,1,CNET_BLACK_COLOR);
	this->image->setPixel(2,2,CNET_BLACK_COLOR);
	this->image->setPixel(3,3,CNET_BLACK_COLOR);
}
