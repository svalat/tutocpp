/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetWidgetMock.h"

CnetWidgetMock::CnetWidgetMock(CnetWidget * parent,unsigned int width,unsigned int height)
	:CnetWidget(parent,width,height)
{
}

CnetWidgetMock::~CnetWidgetMock()
{
}

void CnetWidgetMock::redraw()
{
}

