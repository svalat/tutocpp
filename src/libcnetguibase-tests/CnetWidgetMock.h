/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_WIDGET_MOCK_H
#define CNET_WIDGET_MOCK_H

#include "CnetWidget.h"
#include "CnetCppUnitMock.h"

class CnetWidgetMock : public CnetWidget, public CnetCppUnitMock
{
	public:
		CnetWidgetMock(CnetWidget * parent,unsigned int width,unsigned int height);
		virtual ~CnetWidgetMock();
	protected:
		virtual void redraw();

		CNET_MOCK_METH0(onClic);
		CNET_MOCK_METH1(onKeyPress,char);
		CNET_MOCK_METH0(onGetFocus);
		CNET_MOCK_METH0(onLostFocus);
		CNET_MOCK_METH0(onMouseDown);
		CNET_MOCK_METH0(onMouseUp);
		CNET_MOCK_METH2(onMouseMove,int,int);
};

#endif
