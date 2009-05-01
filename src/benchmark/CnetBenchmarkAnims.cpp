/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetBenchmarkAnims.h"
#include <assert.h>
#include <stdio.h>

CnetBenchmarkAnimMoveWin::CnetBenchmarkAnimMoveWin(CnetMainContainer * container,CnetWidget * widget,unsigned int dx,unsigned int dy)
	:CnetBenchmarkAnimBase(container)
{
	this->widget = widget;
	this->dx=dx;
	this->dy=dy;
	this->step=0;
	this->delta=0;
	this->xorig=widget->getX();
	this->yorig=widget->getY();
}

bool CnetBenchmarkAnimMoveWin::run()
{
	this->delta++;
	switch(this->step)
	{
		case 0:
			this->container->setMousePosition(widget->getAbsoluteX()+1,widget->getAbsoluteY()+1);
			this->container->sendMouseDown();
			assert(&this->container->getFocusedWidget()==widget);
			step++;
			this->delta=0;
			break;
		case 1:
			this->container->sendMouseMove(1,0);
			if (this->delta==this->dx)
			{
				this->delta=0;
				this->step++;
			}
			break;
		case 2:
			this->container->sendMouseMove(0,1);
			if (this->delta==this->dy)
			{
				this->delta=0;
				this->step++;
			}
			break;
		case 3:
			this->container->sendMouseMove(-1,0);
			if (this->delta==this->dx)
			{
				this->delta=0;
				this->step++;
			}
			break;
		case 4:
			this->container->sendMouseMove(0,-1);
			if (this->delta==this->dy)
			{
				this->delta=0;
				this->step++;
			}
			break;
		case 5:
			container->sendMouseUp();
			step++;
			break;
		case 6:
			assert(this->widget->getX()==this->xorig);
			assert(this->widget->getY()==this->yorig);
			this->step=0;
			this->delta=0;
			return true;
	};
	return false;
}


CnetBenchmarkAnimSendKeys::CnetBenchmarkAnimSendKeys(CnetMainContainer * container,CnetWidget * widget,CnetString text)
	:CnetBenchmarkAnimBase(container),widget(widget), text(text)
{
	this->step=0;
}

bool CnetBenchmarkAnimSendKeys::run()
{
	if (this->step==0)
	{
		this->container->setMousePosition(widget->getAbsoluteX()+1,widget->getAbsoluteY()+1);
		this->container->sendMouseClick();
		assert(&this->container->getFocusedWidget()==widget);
	}
	this->container->sendKeyPess(text[step++]);
	if (step>=text.getSize())
	{
		this->step=0;
		return true;
	} else {
		return false;
	}
}

CnetBenchmarkAnimFocusBg::CnetBenchmarkAnimFocusBg(CnetMainContainer * container)
	:CnetBenchmarkAnimBase(container)
{
}

bool CnetBenchmarkAnimFocusBg::run()
{
	this->container->setMousePosition(0,0);
	this->container->sendMouseClick();
	return true;
}
