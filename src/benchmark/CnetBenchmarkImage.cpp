/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetBenchmarkImage.h"
#include "CnetImage.h"

#ifdef SHORT_FOR_DEV
	#define IMG_WIDTH 2000
#else
	#define IMG_WIDTH 6000
#endif

CnetBenchmarkImage::CnetBenchmarkImage()
	:CnetBenchmarkRunner("CnetImage::square")
{
}

CnetBenchmarkImage::~CnetBenchmarkImage()
{
}

void CnetBenchmarkImage::run()
{
	this->benchmarkSquare();
}

void CnetBenchmarkImage::benchmarkSquare()
{
	CnetImage img(IMG_WIDTH,IMG_WIDTH);
	this->startBenchmark();

	for (unsigned int i=0;i<100;i++)
		img.square(0,0,IMG_WIDTH-1,IMG_WIDTH-1);

	this->endBenchmark();
}
