/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_EVENT_MOCK_H
#define CNET_EVENT_MOCK_H

#include "CnetEvent.h"
#include "CnetCppUnitMock.h"
#include <string>

class CnetEventMockDefaultImpl : public CnetEvent
{
	public:
		CnetEventMockDefaultImpl(CnetEvent * parent);
		virtual ~CnetEventMockDefaultImpl();
};

class CnetEventMockChecker : public CnetEvent, public CnetCppUnitMock
{
	public:
		CnetEventMockChecker(CnetEvent * parent);
		virtual ~CnetEventMockChecker();
	protected:
		CNET_MOCK_METH0(onClic);
		CNET_MOCK_METH1(onKeyPress,char);
		CNET_MOCK_METH0(onGetFocus);
		CNET_MOCK_METH0(onLostFocus);
		CNET_MOCK_METH0(onMouseDown);
		CNET_MOCK_METH0(onMouseUp);
		CNET_MOCK_METH2(onMouseMove,int,int);

};

#endif
