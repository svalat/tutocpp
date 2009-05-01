/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BANCHMARK_LIST_H
#define CNET_BANCHMARK_LIST_H

#include "CnetBenchmarkRunner.h"
#include "CnetBenchmarkList.h"
#include "CnetList.h"

class CnetBenchmarkList : public CnetBenchmarkRunner
{
	public:
		CnetBenchmarkList();
		virtual void run();
	private:
		CnetList<long> list;
};

#endif
