/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetEvent.h"
#include <stdlib.h>

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetEvent::CnetEvent(CnetEvent * parent)
{
	this->parent=parent;
	this->enable=true;
	this->selected = false;
}

/*******************************************
               DESTRUCTEUR
*******************************************/
CnetEvent::~CnetEvent()
{
}

/*******************************************
                clic
*******************************************/
void CnetEvent::onClic(void)
{
	if (this->parent!=NULL)
		this->parent->onClic();
}

/*******************************************
              keyPress
*******************************************/
void CnetEvent::onKeyPress(char c)
{
	if (this->parent!=NULL)
		this->parent->onKeyPress(c);
}

/*******************************************
             getFocus
*******************************************/
void CnetEvent::onGetFocus(void)
{
	if (this->parent!=NULL)
		this->parent->onGetFocus();
}

/*******************************************
             lostFocus
*******************************************/
void CnetEvent::onLostFocus(void)
{
	if (this->parent!=NULL)
		this->parent->onLostFocus();
}

/*******************************************
             setEnable
*******************************************/
void CnetEvent::setEnable(bool value)
{
	this->enable = value;
}

/*******************************************
             getEnable
*******************************************/
bool CnetEvent::getEnable(void) const
{
	return this->enable;
}

/*******************************************
             mouseDown
*******************************************/
void CnetEvent::onMouseDown(void)
{
	if (this->parent!=NULL)
		this->parent->onMouseDown();
}

/*******************************************
               mouseUp
*******************************************/
void CnetEvent::onMouseUp(void)
{
	if (this->parent!=NULL)
		this->parent->onMouseUp();
}

/*******************************************
             mouseMove
*******************************************/
void CnetEvent::onMouseMove(int dx,int dy)
{
	if (this->parent!=NULL)
		this->parent->onMouseMove(dx,dy);
}

/*******************************************
             getParent
*******************************************/
CnetEvent * CnetEvent::getParent() const
{
	return this->parent;
}

/*******************************************
             hasFocus
*******************************************/
bool CnetEvent::hasFocus()
{
	return this->selected;
}

/*******************************************
             giveFocus
*******************************************/
void CnetEvent::giveFocus()
{
	CnetEvent * tmp = this;
	while (tmp!=NULL)
	{
		tmp->selected = true;
		tmp=tmp->parent;
	}
	this->onGetFocus();
}

/*******************************************
             retireFocus
*******************************************/
void CnetEvent::retireFocus()
{
	CnetEvent * tmp = this;
	while (tmp!=NULL)
	{
		tmp->selected = false;
		tmp=tmp->parent;
	}
	this->onLostFocus();
}
