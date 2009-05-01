/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_CURSOR_H
#define CNET_CURSOR_H

#include "CnetWidget.h"

class CnetCursor : public CnetWidget
{
	public:
		CnetCursor(CnetWidget * parent);
		virtual ~CnetCursor();
	protected:
		virtual void redraw(void);
};

#endif
