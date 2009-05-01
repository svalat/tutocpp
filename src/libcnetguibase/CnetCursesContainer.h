/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_CURSES_CONTAINER_H
#define CNET_CURSES_CONTAINER_H

#include "CnetMainContainer.h"
#include "CnetCursor.h"

class CnetCursesContainer : public CnetMainContainer
{
	public:
		CnetCursesContainer(unsigned int width,unsigned int height);
		virtual ~CnetCursesContainer();
		void run();
		virtual void sendMouseMove(unsigned int dx,unsigned int dy);
	protected:
		virtual void redrawOnScreen();
		CnetCursor cursor;
};

#endif
