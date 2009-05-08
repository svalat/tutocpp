/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_WIDGET_H
#define CNET_WIDGET_H

#include "CnetEvent.h"
#include "CnetImage.h"
#include "CnetList.h"

#define CNET_ZINDEX_MAX INT_MAX

class CnetWidget : protected CnetEvent
{
	public:
		CnetWidget(CnetWidget * parent,unsigned int width,unsigned int height);
		virtual ~CnetWidget();
		void resize(unsigned int width, unsigned int height);
		void setPosition(unsigned int x,unsigned int y);
		void setZIndex(int z);
		void moveUp(int dz=1);
		void moveDown(int dz=1);
		void move(int dx, int dy);
		void show();
		void hide();
		bool getVisibility(void);
		unsigned int getX(void);
		unsigned int getY(void);
		int getZIndex(void);
		unsigned int getWidth(void);
		unsigned int getHeight(void);
		CnetWidget * getParent() const;
		unsigned int getAbsoluteX();
		unsigned int getAbsoluteY();
		bool getNeedRefresh() const;
		bool getNeedRedraw() const;
	protected:
		void refresh(CnetImage & rootImage);
		CnetWidget & selectFocusChild(unsigned int x,unsigned int y);
		void refresh(bool redraw=true,bool refreshChilds=false);
		virtual void onGetFocus();
		virtual void onLostFocus();
		
		CnetImage * image;
		virtual void redraw(void)=0;
		CnetList<CnetWidget*> childs;
	private:
		void init(CnetWidget * parent,unsigned int width,unsigned int height);
		void addChild(CnetWidget *child);
		bool delChild(CnetWidget *child);
		void reorderChilds();
		void paintIntoRoot(CnetImage & rootImage);
		
		CnetWidget *parent;
		int zIndex;
		bool visible;
		unsigned int px;
		unsigned int py;
		bool needRefresh;
		bool needRedraw;
};

#endif
