/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_WINDOW_H
#define CNET_WINDOW_H

#include "CnetWidget.h"

class CnetWindow : public CnetWidget
{
	public:
		CnetWindow(CnetWidget * parent, unsigned int width,unsigned int height);
		virtual ~CnetWindow();
	protected:
		virtual void redraw(void);
		virtual void onMouseDown(void);
		virtual void onMouseUp(void);
		virtual void onMouseMove(int dx,int dy);
	private:
		bool mouseIdDown;
};

#endif
