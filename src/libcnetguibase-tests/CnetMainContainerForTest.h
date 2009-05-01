/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_MAIN_CONTAINER_FOR_TEST_H
#define CNET_MAIN_CONTAINER_FOR_TEST_H

#include "CnetMainContainer.h"

class CnetMainContainerForTest : public CnetMainContainer
{
	public:
		CnetMainContainerForTest(unsigned int width,unsigned int height);
		~CnetMainContainerForTest();
		const CnetImage & getScreen() const;
		void forceFocus(CnetWidget * widget);
	protected:
		virtual void redrawOnScreen();
		CnetImage screen;
};

#endif
