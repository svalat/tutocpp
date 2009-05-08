/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetWidget.h"
#include <assert.h>

using namespace std;

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetWidget::CnetWidget(CnetWidget * parent,unsigned int width,unsigned int height)
	:CnetEvent(parent)
{
	this->init(parent,width,height);
}

/*******************************************
             DESTRUCTEUR
*******************************************/
CnetWidget::~CnetWidget()
{
	if (this->parent!=NULL)
		this->parent->delChild(this);
	//on délie les enfants
	for (CnetList<CnetWidget*>::iterator it=this->childs.begin();it!=this->childs.end();++it)
		(*it)->parent=NULL;
	this->childs.clear();
	delete this->image;
}

/*******************************************
                 init
*******************************************/
void CnetWidget::init(CnetWidget * parent,unsigned int width,unsigned int height)
{
	this->parent = parent;
	this->image = new CnetImage(width,height);
	this->px = 0;
	this->py = 0;
	this->zIndex = 0;
	this->visible = true;
	this->needRefresh = true;
	this->needRedraw = true;
	if (parent!=NULL)
		parent->addChild(this);
}

/*******************************************
               resize
*******************************************/
void CnetWidget::resize(unsigned int width, unsigned int height)
{
	delete this->image;
	this->image = new CnetImage(width,height);
	this->redraw();
	if (this->parent!=NULL)
		this->parent->refresh(false,true);
}

/*******************************************
             setPosition
*******************************************/
void CnetWidget::setPosition(unsigned int x,unsigned int y)
{
	this->px=x;
	this->py=y;
	if (this->parent!=NULL)
		this->parent->refresh(false,true);
}

/*******************************************
              setZIndex
*******************************************/
void CnetWidget::setZIndex(int z)
{
	this->zIndex = z;
	if (this->parent!=NULL)
		this->parent->reorderChilds();
}

/*******************************************
               moveUp
*******************************************/
void CnetWidget::moveUp(int dz)
{
	this->setZIndex(this->zIndex+dz);
}

/*******************************************
              moveDown
*******************************************/
void CnetWidget::moveDown(int dz)
{
	this->setZIndex(this->zIndex-dz);
}

/*******************************************
                 move
*******************************************/
void CnetWidget::move(int dx, int dy)
{
	this->px+=dx;
	this->py+=dy;
	if (this->parent!=NULL)
		this->parent->refresh(false,true);
}

/*******************************************
                 show
*******************************************/
void CnetWidget::show()
{
	this->visible = true;
	if (this->parent!=NULL)
		this->parent->refresh(false,true);
}

/*******************************************
                  hide
*******************************************/
void CnetWidget::hide()
{
	this->visible = false;
	if (this->parent!=NULL)
		this->parent->refresh(false);
}

/*******************************************
             getVisibility
*******************************************/
bool CnetWidget::getVisibility(void)
{
	return this->visible;
}

/*******************************************
                getX
*******************************************/
unsigned int CnetWidget::getX(void)
{
	return this->px;
}

/*******************************************
                  getY
*******************************************/
unsigned int CnetWidget::getY(void)
{
	return this->py;
}

/*******************************************
                  getZ
*******************************************/
int CnetWidget::getZIndex(void)
{
	return this->zIndex;
}

/*******************************************
             getWidth
*******************************************/
unsigned int CnetWidget::getWidth(void)
{
	return this->image->getWidth();
}

/*******************************************
             getHeight
*******************************************/
unsigned int CnetWidget::getHeight(void)
{
	return this->image->getHeight();
}

/*******************************************
             addChild
*******************************************/
void CnetWidget::addChild(CnetWidget *child)
{
	assert(child!=NULL);
	this->childs.add(child);
	this->reorderChilds();
}

/*******************************************
             delChild
*******************************************/
bool CnetWidget::delChild(CnetWidget *child)
{
	this->childs.removeValue(child);
	this->refresh(false,true);
	return true;
}

/*******************************************
             getAbsoluteX
*******************************************/
unsigned int CnetWidget::getAbsoluteX()
{
	unsigned int res=px;
	CnetWidget * current = parent;
	while (current != NULL)
	{
		res+=current->px;
		current = current->parent;
	}
	return res;
}

/*******************************************
             getAbsoluteY
*******************************************/
unsigned int CnetWidget::getAbsoluteY()
{
	unsigned int res=py;
	CnetWidget * current = parent;
	while (current != NULL)
	{
		res+=current->py;
		current = current->parent;
	}
	return res;
}

/*******************************************
             getAbsoluteY
*******************************************/
void CnetWidget::reorderChilds()
{
	//pas besoin de trier
	if (childs.getSize()<2)
	{
		this->refresh(false,true);
		return;
	}

	unsigned int pos;
	CnetWidget *tmp;
	for (unsigned int i=0; i<childs.getSize()-1; i++)
	{
		pos=i;
		for(unsigned int j=i+1;j<childs.getSize();j++)
			if (childs[j]!=NULL)
				if (childs[j]->zIndex < childs[pos]->zIndex)
					pos=j;
		if (i!=pos)
		{
			tmp=childs[i];
			childs[i]=childs[pos];
			childs[pos]=tmp;
		}
	}
	this->refresh(false,true);
}

/*******************************************
             getParent
*******************************************/
CnetWidget * CnetWidget::getParent() const
{
	return this->parent;
}

/*******************************************
              refresh
*******************************************/
void CnetWidget::refresh(bool redraw,bool refreshChilds)
{
	this->needRefresh = true;
	if (redraw)
		this->needRedraw = true;
	if (refreshChilds || redraw)
		for (CnetList<CnetWidget*>::iterator it=this->childs.begin();it!=this->childs.end();++it)
			(*it)->refresh(true);
}

void CnetWidget::refresh(CnetImage & rootImage)
{
	//widget courrant
	if (this->needRefresh)
	{
		this->redraw();
		this->paintIntoRoot(rootImage);
	}

	//les enfants
	for (CnetList<CnetWidget*>::iterator it=this->childs.begin();it!=this->childs.end();++it)
	{
		if ((*it)->getVisibility())
		{
			(*it)->refresh(rootImage);
			//this->image->paintImage(*(*it)->image,(*it)->getX(),(*it)->getY());
		}
	}
	this->needRefresh = false;
}

/*******************************************
              paintIntoRoot
*******************************************/
void CnetWidget::paintIntoRoot(CnetImage & rootImage)
{
	if (parent==NULL)
		return;
	CnetSquare square = {0,0,this->image->getWidth(),this->image->getHeight()};

	if (this->parent!=NULL)
	{
		if ((int)this->px<0)
			square.x=-this->px;
		if ((int)this->py<0)
			square.y=-this->py;
		if (this->px+square.width > this->parent->image->getWidth())
		{
			if (this->px > this->parent->image->getWidth())
				return;
			else
				square.width = this->parent->image->getWidth()-this->px;
		}
		if (this->py+square.height > this->parent->image->getHeight())
		{
			if (this->py > this->parent->image->getHeight())
				return;
			else
				square.height = this->parent->image->getHeight()-this->py;
		}
	}

	unsigned int absX = this->getAbsoluteX();
	unsigned int absY = this->getAbsoluteY();
	if ((int)absX<0) square.x+=(int)absX;
	if ((int)absY<0) square.y+=(int)absY;
	rootImage.paintImage(*this->image,absX,absY,square);
}

/*******************************************
              onGetFocus
*******************************************/
void CnetWidget::onGetFocus()
{
	this->refresh();
}

/*******************************************
              onLostFocus
*******************************************/
void CnetWidget::onLostFocus()
{
	this->refresh();
}

/*******************************************
              selectFocusChild
*******************************************/
CnetWidget & CnetWidget::selectFocusChild(unsigned int x,unsigned int y)
{
	CnetWidget * ptr;
	for (CnetList<CnetWidget*>::iterator rit=childs.rbegin();rit!=this->childs.end();--rit)
	{
		ptr=*rit;
		//on utilise l'astuce des débordement unsigned int pour éviter de tester le dépassement à gauche et haut.
		if (ptr->visible && ptr->enable &&  x - ptr->getX() < ptr->getWidth() && y - ptr->getY() < ptr->getHeight())
			return ptr->selectFocusChild(x - ptr->px,y - ptr->py);
	}
	return *this;
}

/*******************************************
              getNeedRefresh
*******************************************/
bool CnetWidget::getNeedRefresh() const
{
	return this->needRefresh;
}

/*******************************************
              getNeedRedraw
*******************************************/
bool CnetWidget::getNeedRedraw() const
{
	return this->needRedraw;
}
