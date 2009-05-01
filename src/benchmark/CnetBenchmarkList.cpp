/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetBenchmarkList.h"

#ifdef SHORT_FOR_DEV
	#define LIST_SIZE 8000
#else
	#define LIST_SIZE 15000
#endif

CnetBenchmarkList::CnetBenchmarkList()
	:CnetBenchmarkRunner("CnetList::*")
{
	
}

void CnetBenchmarkList::run()
{
	this->startBenchmark();
	for (unsigned int i=0;i<5;i++)
	{
		//on vide
		this->list.clear();
		//on remplie
		for (long j=0;j<LIST_SIZE;j++)
			this->list.add(j);
		//on parcour
		long read;
		for (CnetList<long>::iterator it=list.begin();it!=list.end();++it)
			read=*it;
		//dans l'autre sens
		for (CnetList<long>::iterator rit=list.rbegin();rit!=list.end();--rit)
			read=*rit;

		//parcour par index
		for (unsigned int j=0;j<list.getSize();j++)
			read=list[j];
		//on supprime des éléments
		for (long j=1500;j<1700;j++)
			list.remove(j);
		//par index
		for (long j=1200;j<1400;j++)
			list.removeValue(j);
		//on remet ce qu'il manque
		for (long j=0;j<400;j++)
			this->list.add(j);
		//on vide
		this->list.clear();
	}
	this->endBenchmark();
}
