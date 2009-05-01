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
}

/*******************************************
             setPosition
*******************************************/
void CnetWidget::setPosition(unsigned int x,unsigned int y)
{
	this->px=x;
	this->py=y;
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
}

/*******************************************
                 show
*******************************************/
void CnetWidget::show()
{
	this->visible = true;
}

/*******************************************
                  hide
*******************************************/
void CnetWidget::hide()
{
	this->visible = false;
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
		return;
	
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
void CnetWidget::refresh()
{
	//widget courrant
	//if (paintCurrent)
	//	this->image->paintImage(child.getImage(),x,y);
	this->image->clear(CNET_WHITE_COLOR);
	this->redraw();
	
	//les enfants
	for (CnetList<CnetWidget*>::iterator it=this->childs.begin();it!=this->childs.end();++it)
	{
		if ((*it)->getVisibility())
		{
			(*it)->refresh();
			this->image->paintImage(*(*it)->image,(*it)->getX(),(*it)->getY());
		}
	}
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
