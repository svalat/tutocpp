/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_WIDGET_FOR_TEST_H
#define CNET_WIDGET_FOR_TEST_H

#include "CnetWidget.h"

class CnetWidgetForTest : public CnetWidget
{
	public:
		CnetWidgetForTest(CnetWidget * parent,unsigned int width,unsigned int height);
		virtual ~CnetWidgetForTest();
		const CnetImage & getImage() const;
		CnetImage screenshot();
		unsigned int getAbsoluteX();
		unsigned int getAbsoluteY();
		CnetWidget * getChild(unsigned int index);
		unsigned int countChilds();
	protected:
		virtual void redraw(void);
		void screenshot(CnetImage & screenshot,unsigned int x,unsigned int y);
};

#endif
