/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetBenchmarkWidgetMainContainer.h"
#include "CnetBenchmarkAnims.h"
#include <stdio.h>
#include <iostream>
#include <unistd.h>

#ifdef SHORT_FOR_DEV
#define WIN_SIZE 200
#define WIN_MOVE 10
#else
#define WIN_SIZE 400
#define WIN_MOVE 50
#endif

using namespace std;

CnetBencmarkWidgetMainContainer::CnetBencmarkWidgetMainContainer(unsigned int width,unsigned int height)
	:CnetMainContainer(width,height),CnetBenchmarkRunner("CnetWidget::*")
{
	this->initContent();
	this->initAnim();
}

void CnetBencmarkWidgetMainContainer::redrawOnScreen()
{
}

void CnetBencmarkWidgetMainContainer::run()
{
	this->startBenchmark();
	for (unsigned int i=0;i<2;i++)
	{
		for (CnetList<CnetBenchmarkAnimBase*>::iterator it=this->anims.begin();it!=this->anims.end();++it)
		{
			while (!(*it)->run())
			{
				//printf("%px => %d,%d : %d,%d : %s : %s\n",*it,win->getX(),win->getY(),win2->getX(),win2->getY(),text->getText().getCStr(),text2->getText().getCStr());
				//usleep(20000);
				this->refresh();
			}
		}
	};
	this->endBenchmark();
}

void CnetBencmarkWidgetMainContainer::initAnim()
{
	this->anims.add(new CnetBenchmarkAnimMoveWin(this,win,WIN_MOVE,WIN_MOVE));
	this->anims.add(new CnetBenchmarkAnimSendKeys(this,text,"abcdefghijklmnopqrstuvzxyzabcdefghijklmnopqrstuvzxyz"));
	this->anims.add(new CnetBenchmarkAnimSendKeys(this,text2,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvzxyz"));
	this->anims.add(new CnetBenchmarkAnimMoveWin(this,win2,WIN_MOVE,WIN_MOVE));
	this->anims.add(new CnetBenchmarkAnimSendKeys(this,text,"0123456789abcdefghijklmnopqrstuvzxyz"));
	this->anims.add(new CnetBenchmarkAnimSendKeys(this,text2,"0123456789abcdefghijklmnopqrstuvzxyz"));
}

void CnetBencmarkWidgetMainContainer::initContent()
{
	win = new CnetWindow(this,WIN_SIZE,WIN_SIZE);
	win->setPosition(2,2);
	win2=new CnetWindow(win,50,50);
	win2->setPosition(150,4);
	win2->setZIndex(10);
	text = new CnetTextBox(win,WIN_SIZE-50,12);
	text->setPosition(10,30);
	text2 = new CnetTextBox(win,WIN_SIZE-50,12);
	text2->setPosition(10,45);
}
