/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetMainContainer.h"

using namespace std;

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetMainContainer::CnetMainContainer(unsigned int width,unsigned int height)
	:CnetWidget(NULL,width,height)
{
	this->focus = this;
	this->mouseIsDown = false;
	this->mouseX = 0;
	this->mouseY = 0;
}

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetMainContainer::~CnetMainContainer()
{
}

/*******************************************
             refresh
*******************************************/
void CnetMainContainer::refresh()
{
	//on fait un clear si besoin
	if (this->getNeedRefresh())
		this->image->clear(CNET_WHITE_COLOR);
	CnetWidget::refresh(*this->image);
	//on met à jour l'écran
	this->redrawOnScreen();
}

/*******************************************
             screenshot
*******************************************/
CnetImage CnetMainContainer::screenshot()
{
	//on vide le buffer courrant
	this->image->clear(CNET_WHITE_COLOR);
	//on dessine les widget enfant
	CnetWidget::refresh(*this->image);
	//on renvoie l'image courrante
	return *this->image;
}

/*******************************************
             selectFocusWindow
*******************************************/
CnetWidget & CnetMainContainer::selectFocusWidget(unsigned int x,unsigned int y)
{
	this->focus = &CnetWidget::selectFocusChild(x,y);
	return *this->focus;
}

/*******************************************
             redraw
*******************************************/
void CnetMainContainer::redraw()
{
	//on ne redessine rien sur le mainContainer
}

/*******************************************
             getFocusedWidget
*******************************************/
CnetWidget & CnetMainContainer::getFocusedWidget() const
{
	return *this->focus;
}

/*******************************************
                 doFous
*******************************************/
void CnetMainContainer::doFocus()
{
	CnetEvent * current = this->focus;
	this->selectFocusWidget(this->mouseX,this->mouseY);
	if (current != focus)
	{
		current->retireFocus();
		((CnetEvent*)focus)->giveFocus();
	}
}

/*******************************************
             sendMouseMove
*******************************************/
void CnetMainContainer::sendMouseMove(unsigned int dx,unsigned int dy)
{
	this->mouseX+=dx;
	this->mouseY+=dy;
	if (this->mouseIsDown)
		((CnetEvent*)this->focus)->onMouseMove(dx,dy);
}

/*******************************************
             sendMouseDown
*******************************************/
void CnetMainContainer::sendMouseDown()
{
	if (mouseIsDown)
	{
		((CnetEvent*)focus)->onMouseUp();
		mouseIsDown = false;
	}
	this->doFocus();
	((CnetEvent*)focus)->onMouseDown();
	mouseIsDown = true;
}

/*******************************************
             sendMouseUp
*******************************************/
void CnetMainContainer::sendMouseUp()
{
	if (mouseIsDown)
	{
		((CnetEvent*)focus)->onMouseUp();
		mouseIsDown = false;
	}
}

/*******************************************
             sendMouseClick
*******************************************/
void CnetMainContainer::sendMouseClick()
{
	if (mouseIsDown)
	{
		((CnetEvent*)focus)->onMouseUp();
		mouseIsDown = false;
	}
	this->doFocus();
	((CnetEvent*)focus)->onClic();
}

/*******************************************
             sendKeyPess
*******************************************/
void CnetMainContainer::sendKeyPess(char key)
{
	((CnetEvent*)focus)->onKeyPress(key);
}

/*******************************************
             getMouseX
*******************************************/
unsigned int CnetMainContainer::getMouseX() const
{
	return this->mouseX;
}

/*******************************************
             getMouseY
*******************************************/
unsigned int CnetMainContainer::getMouseY() const
{
	return this->mouseY;
}

/*******************************************
             setMousePosition
*******************************************/
void CnetMainContainer::setMousePosition(unsigned int x,unsigned int y)
{
	if (this->mouseIsDown)
		((CnetEvent*)this->focus)->onMouseMove(x-mouseX,y-mouseY);
	this->mouseX = x;
	this->mouseY = y;
}
