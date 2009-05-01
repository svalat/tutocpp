/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_EVENT_H
#define CNET_EVENT_H

class CnetEvent
{
	public:
		CnetEvent(CnetEvent * parent);
		virtual ~CnetEvent()=0;
		CnetEvent * getParent() const;
		void setEnable(bool value=true);
		bool getEnable(void) const;
		virtual void onClic(void);
		virtual void onKeyPress(char c);
		virtual void onGetFocus(void);
		virtual void onLostFocus(void);
		virtual void onMouseDown(void);
		virtual void onMouseUp(void);
		virtual void onMouseMove(int dx,int dy);
		bool hasFocus();
		void giveFocus();
		void retireFocus();
	protected:
		bool enable;
		bool selected;
		CnetEvent *parent;
};

#endif
