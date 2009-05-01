/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BENCHMARK_ANIM_H
#define CNET_BENCHMARK_ANIM_H

#include "CnetBenchmarkAnimBase.h"
#include "CnetWidget.h"
#include "CnetString.h"

class CnetBenchmarkAnimMoveWin : public CnetBenchmarkAnimBase
{
	public:
		CnetBenchmarkAnimMoveWin(CnetMainContainer * container,CnetWidget * widget,unsigned int dx,unsigned int dy);
		virtual bool run();
	private:
		CnetWidget * widget;
		unsigned int dx;
		unsigned int dy;
		unsigned char step;
		unsigned int delta;
		unsigned int xorig;
		unsigned int yorig;
};

class CnetBenchmarkAnimSendKeys : public CnetBenchmarkAnimBase
{
	public:
		CnetBenchmarkAnimSendKeys(CnetMainContainer * container,CnetWidget * widget,CnetString text);
		virtual bool run();
	private:
		CnetWidget * widget;
		unsigned int step;
		CnetString text;
};

class CnetBenchmarkAnimFocusBg : public CnetBenchmarkAnimBase
{
	public:
		CnetBenchmarkAnimFocusBg(CnetMainContainer * container);
		virtual bool run();
};
#endif
