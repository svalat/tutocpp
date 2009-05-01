/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#ifdef USE_SDL
#include "CnetSDLContainer.h"
#else
#include "CnetCursesContainer.h"
#endif
#include "CnetTextBox.h"
#include "CnetWindow.h"

int main(void)
{
	#ifdef USE_SDL
	CnetSDLContainer root(200,200);
	#else
	CnetCursesContainer root(150,50);
	#endif
	CnetWindow win(&root,120,40);
	win.setPosition(2,2);
	CnetWindow win2(&win,10,6);
	win2.setPosition(10,4);
	win2.setZIndex(10);
	CnetTextBox text(&win,100,12);
	text.setPosition(10,10);
	CnetTextBox text2(&win,100,12);
	text2.setPosition(10,25);
	root.run();
	return EXIT_SUCCESS;
}
