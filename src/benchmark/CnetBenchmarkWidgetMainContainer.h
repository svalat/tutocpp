/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_BENCHMARK_WIDGET_MAIN_CONTAINER_H
#define CNET_BENCHMARK_WIDGET_MAIN_CONTAINER_H

#include "CnetMainContainer.h"
#include "CnetBenchmarkAnimBase.h"
#include "CnetList.h"
#include "CnetWindow.h"
#include "CnetTextBox.h"
#include "CnetBenchmarkRunner.h"

class CnetBencmarkWidgetMainContainer : public CnetMainContainer, public CnetBenchmarkRunner
{
	public:
		CnetBencmarkWidgetMainContainer(unsigned int width=1000,unsigned int height=1000);
		virtual void redrawOnScreen();
		void run();
	protected:
		void initAnim();
		void initContent();
		CnetList<CnetBenchmarkAnimBase*> anims;

		CnetWindow * win;
		CnetWindow * win2;
		CnetTextBox * text;
		CnetTextBox * text2;
};


#endif
