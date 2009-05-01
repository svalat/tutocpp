/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BENCHMARK_RUNNER_H
#define CNET_BENCHMARK_RUNNER_H

#include <time.h>
#include "CnetString.h"

class CnetBenchmarkRunner
{
	public:
		CnetBenchmarkRunner(const char * name);
		virtual ~CnetBenchmarkRunner();
		virtual void run() = 0;
		void printMeanTime();
	protected:
		void startBenchmark(void);
		void endBenchmark(void);
	private:
		clock_t startClock;
		CnetString name;
		clock_t total;
		clock_t cnt;
};

#endif
