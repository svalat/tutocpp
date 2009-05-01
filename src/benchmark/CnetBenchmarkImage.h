/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BENCHMARK_IMAGE_H
#define CNET_BENCHMARK_IMAGE_H

#include "CnetBenchmarkRunner.h"

class CnetBenchmarkImage : public CnetBenchmarkRunner
{
	public:
		CnetBenchmarkImage();
		virtual ~CnetBenchmarkImage();
		virtual void run();
	protected:
		void benchmarkSquare();
};

#endif
