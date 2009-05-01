/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetWidgetForTest.h"
#include <assert.h>

using namespace std;

CnetWidgetForTest::CnetWidgetForTest(CnetWidget * parent,unsigned int width,unsigned int height)
	:CnetWidget(parent,width,height)
{
	this->redraw();
}

CnetWidgetForTest::~CnetWidgetForTest()
{
}

void CnetWidgetForTest::redraw(void)
{
	this->image->square(0,0,this->image->getWidth(),this->image->getHeight());
}

const CnetImage & CnetWidgetForTest::getImage() const
{
	return *this->image;
}

CnetImage CnetWidgetForTest::screenshot()
{
	CnetImage res(this->image->getWidth(),this->image->getHeight());

	this->screenshot(res,0,0);
	
	return res;
}

void CnetWidgetForTest::screenshot(CnetImage & screenshot,unsigned int x,unsigned int y)
{
	//widget courrant
	screenshot.paintImage(*this->image,x,y);
	//les enfants
	for (CnetList<CnetWidget*>::iterator it=this->childs.begin();it!=this->childs.end();++it)
		if ((*it)->getVisibility())
			((CnetWidgetForTest*)(*it))->screenshot(screenshot,x+(*it)->getX(),y+(*it)->getY());
}

CnetWidget * CnetWidgetForTest::getChild(unsigned int index)
{
	if (index>=this->childs.getSize())
	{
		return NULL;
	} else {
		return this->childs[index];
	}
}

unsigned int CnetWidgetForTest::countChilds()
{
	return this->childs.getSize();
}

unsigned int CnetWidgetForTest::getAbsoluteX()
{
	return CnetWidget::getAbsoluteX();
}

unsigned int CnetWidgetForTest::getAbsoluteY()
{
	return CnetWidget::getAbsoluteY();
}
