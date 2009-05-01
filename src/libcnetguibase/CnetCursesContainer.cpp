/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetCursesContainer.h"
#include "CnetImageToAscii.h"
#include <curses.h>
#include <stdio.h>



CnetCursesContainer::CnetCursesContainer(unsigned int width,unsigned int height)
		:CnetMainContainer(width,height),cursor(this)
{

}

CnetCursesContainer::~CnetCursesContainer()
{
}

void CnetCursesContainer::run()
{
	//curses
	initscr();
	noecho();
	keypad(stdscr,true);
	//loop
	int buffer = '\0';
	bool run = true;
	//tant que pas echape
	while (run)
	{
		this->refresh();

		//evenement clavier
		buffer=getch();

		switch (buffer)
		{
			case KEY_DOWN:
				this->sendMouseMove(0,1);
				break;
			case KEY_UP:
				this->sendMouseMove(0,-1);
				break;
			case KEY_LEFT:
				this->sendMouseMove(-1,0);
				break;
			case KEY_RIGHT:
				this->sendMouseMove(1,0);
				break;
			case KEY_HOME:
				this->sendMouseDown();
				break;
			case KEY_END:
				this->sendMouseUp();
				break;
			case '\n'://entré => clic
				this->sendMouseClick();
				break;
			case 27://echape
				run=false;
				break;
			default:
				this->sendKeyPess(buffer);
		}
	}
	endwin();
}

void CnetCursesContainer::redrawOnScreen()
{
	clear();
	move(0,0);
	for (unsigned int x=0;x<this->image->getWidth();x++)
		for (unsigned int y=0;y<this->image->getHeight();y++)
			mvaddch(y,x,CNET_COLOR_TO_ASCII[this->image->getPixel(x,y)]);
}

void CnetCursesContainer::sendMouseMove(unsigned int dx,unsigned int dy)
{
	this->cursor.move(dx,dy);
	CnetMainContainer::sendMouseMove(dx,dy);
	
}
