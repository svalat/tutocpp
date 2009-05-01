/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetEventMock.h"
#include <stdio.h>

CnetEventMockDefaultImpl::CnetEventMockDefaultImpl(CnetEvent * parent)
	:CnetEvent(parent)
{
}

CnetEventMockDefaultImpl::~CnetEventMockDefaultImpl()
{
}

CnetEventMockChecker::CnetEventMockChecker(CnetEvent * parent)
	:CnetEvent(parent)
{
}

CnetEventMockChecker::~CnetEventMockChecker()
{
}

