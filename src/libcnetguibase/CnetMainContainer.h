/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_MAIN_CONTAINER_H
#define CNET_MAIN_CONTAINER_H

#include "CnetWidget.h"

class CnetMainContainer : public CnetWidget
{
	public:
		CnetMainContainer(unsigned int width,unsigned int height);
		virtual ~CnetMainContainer();
		void refresh();
		CnetImage screenshot();
		CnetWidget & selectFocusWidget(unsigned int x,unsigned int y);
		CnetWidget & getFocusedWidget() const;

		virtual void sendMouseMove(unsigned int dx,unsigned int dy);
		virtual void sendMouseDown();
		virtual void sendMouseUp();
		virtual void sendMouseClick();
		virtual void sendKeyPess(char key);
		virtual void setMousePosition(unsigned int x,unsigned int y);

		unsigned int getMouseX() const;
		unsigned int getMouseY() const;
	protected:
		
		CnetWidget & updateFocus(CnetWidget & widget,unsigned int x,unsigned int y);
		virtual void redraw();
		virtual void redrawOnScreen()=0;
		virtual void doFocus();
	private:
		CnetWidget * focus;
		bool mouseIsDown;
		unsigned int mouseX,mouseY;
};

#endif
