/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BENCHMARK_ANIM_BASE_H
#define CNET_BENCHMARK_ANIM_BASE_H

#include "CnetMainContainer.h"

class CnetBenchmarkAnimBase
{
	public:
		CnetBenchmarkAnimBase(CnetMainContainer * container){this->container = container;};
		virtual ~CnetBenchmarkAnimBase(){};
		virtual bool run()=0;
	protected:
		CnetMainContainer * container;
};

#endif
