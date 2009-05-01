/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetBenchmarkRunner.h"
#include <stdio.h>

CnetBenchmarkRunner::CnetBenchmarkRunner(const char * name)
{
	this->name=name;
	this->cnt=0;
	this->total=0;
}

CnetBenchmarkRunner::~CnetBenchmarkRunner()
{
}

void CnetBenchmarkRunner::startBenchmark()
{
	printf("Run benchmark %s ... ",name.getCStr());
	this->startClock = clock();
}

void CnetBenchmarkRunner::endBenchmark(void)
{
	clock_t delay = (clock() - this->startClock);
	this->total+=delay;
	this->cnt++;
	printf("%li clocks => %li secondes\n",delay,delay/CLOCKS_PER_SEC);
}

void CnetBenchmarkRunner::printMeanTime()
{
	printf("Result benchmark %20s : %li clocks\n",name.getCStr(),total/cnt);
}
