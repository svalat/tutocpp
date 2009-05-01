/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_TEXT_BOX_H
#define CNET_TEXT_BOX_H

#include "CnetWidget.h"
#include "CnetFontSimple.h"
#include "CnetString.h"

class CnetTextBox : public CnetWidget
{
	public:
		CnetTextBox(CnetWidget * parent,unsigned int width,unsigned int height,CnetColor color=CNET_BLACK_COLOR);
		virtual ~CnetTextBox();
		void setText(const CnetString & text);
		CnetString getText(void) const;
		CnetColor getColor() const;
		void setColor(CnetColor color);
		void clear();
		virtual void onKeyPress(char c);
	protected:
		virtual void redraw();
	private:
		CnetFontSimple font;
		CnetString text;
};

#endif
