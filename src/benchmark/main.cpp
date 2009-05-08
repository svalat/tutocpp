/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <stdio.h>

#include "CnetBenchmarkImage.h"
#include "CnetBenchmarkWidgetMainContainer.h"
#include "CnetBenchmarkList.h"

#ifdef SHORT_FOR_DEV
#define NB_LOOP 1
#else
#define NB_LOOP 3
#endif

int main(int argc, char * argv[])
{
	printf("Benchmark...\n\n");


	CnetBenchmarkImage bench1;
	CnetBenchmarkList bench2;
	CnetBencmarkWidgetMainContainer bench3;

	CnetList<CnetBenchmarkRunner *> bench;
	//bench.add(&bench1);
	//bench.add(&bench2);
	bench.add(&bench3);

	for (CnetList<CnetBenchmarkRunner *>::iterator it=bench.begin();it!=bench.end();++it)
	{
		for (int i=0;i<NB_LOOP;i++)
			(*it)->run();
	}

	printf("============ RESULT =============\n");
	for (CnetList<CnetBenchmarkRunner *>::iterator it=bench.begin();it!=bench.end();++it)
		(*it)->printMeanTime();
	printf("=================================\n");

	return EXIT_SUCCESS;
}
