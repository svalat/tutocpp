/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetTextBox.h"

/*******************************************
             CONSTRUCTEUR
*******************************************/
CnetTextBox::CnetTextBox(CnetWidget * parent,unsigned int width,unsigned int height,CnetColor color)
	:CnetWidget(parent,width,height) , font(color)
{
}

/*******************************************
             DESTRUCTEUR
*******************************************/
CnetTextBox::~CnetTextBox()
{
	/** @todo write **/
}

/*******************************************
             setText
*******************************************/
void CnetTextBox::setText(const CnetString & text)
{
	this->text = text;
	this->redraw();
}

/*******************************************
             getText
*******************************************/
CnetString CnetTextBox::getText(void) const
{
	return text;
}

/*******************************************
             getColor
*******************************************/
CnetColor CnetTextBox::getColor() const
{
	return this->font.getColor();
}

/*******************************************
             setColor
*******************************************/
void CnetTextBox::setColor(CnetColor color)
{
	this->font.setColor(color);
	this->redraw();
}

/*******************************************
             keyPress
*******************************************/
void CnetTextBox::onKeyPress(char c)
{
	switch(c)
	{
		case '\n':
			return;
		case (char)127:
			text=text.getSubStr(0,text.getSize()-1);
			break;
		case '\t':
			text+="   ";
			break;
		default:
			text+=c;
	}
	this->redraw();
}

/*******************************************
                redraw
*******************************************/
void CnetTextBox::redraw()
{
	unsigned int maxChars = (this->getWidth()-4)/font.getCharWidth();
	unsigned int cursorPos;
	
	this->image->clear(CNET_WHITE_COLOR);
	this->image->square(0,0,this->image->getWidth(),this->image->getHeight(),CNET_BLACK_COLOR,CNET_WHITE_COLOR);
	if (this->text.getSize()<=maxChars) {
		this->font.print(*this->image,2,2,this->text);
		cursorPos = this->text.getSize()*font.getCharWidth()+2;
	} else {
		this->font.print(*this->image,2,2,this->text.getSubStr(this->text.getSize()-maxChars,maxChars));
		cursorPos = maxChars*font.getCharWidth()+2;
	}

	if (this->hasFocus())
		this->image->line(cursorPos,2,cursorPos,font.getCharHeight());
}

/*******************************************
                clear
*******************************************/
void CnetTextBox::clear()
{
	this->text="";
	this->redraw();
}
