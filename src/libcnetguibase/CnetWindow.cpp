/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetWindow.h"

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetWindow::CnetWindow(CnetWidget * parent, unsigned int width,unsigned int height)
		:CnetWidget(parent,width,height)
{
	this->mouseIdDown = false;
	this->image->square(0,0,this->getWidth(),this->getHeight(),CNET_GRAY_COLOR,CNET_WHITE_COLOR);
}

/*******************************************
             DESTRUCTEUR
*******************************************/
CnetWindow::~CnetWindow()
{
}

/*******************************************
             mouseDown
*******************************************/
void CnetWindow::onMouseDown(void)
{
	this->mouseIdDown =true;
	this->refresh();
}

/*******************************************
             mouseUp
*******************************************/
void CnetWindow::onMouseUp(void)
{
	this->mouseIdDown =false;
	this->refresh();
}

/*******************************************
             mouseMove
*******************************************/
void CnetWindow::onMouseMove(int dx,int dy)
{
	if (this->mouseIdDown)
		this->move(dx,dy);	
}

/*******************************************
             redraw
*******************************************/
void CnetWindow::redraw(void)
{
	//this->image->square(0,0,this->getWidth(),this->getHeight(),CNET_GRAY_COLOR,CNET_WHITE_COLOR);
	if (this->hasFocus())
	{
		if (this->mouseIdDown)
			this->image->square(0,0,this->getWidth(),3,CNET_BLACK_COLOR,CNET_BLACK_COLOR);
		else
			this->image->square(0,0,this->getWidth(),3,CNET_GRAY_COLOR,CNET_BLACK_COLOR);
	} else {
		this->image->square(0,0,this->getWidth(),3,CNET_GRAY_COLOR,CNET_GRAY_COLOR);
	}
}
