/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifndef CNET_SDL_CONTAINER_H
#define CNET_SDL_CONTAINER_H

#include "CnetMainContainer.h"
#include <SDL.h>

class CnetSDLContainer : public CnetMainContainer
{
	public:
		CnetSDLContainer(unsigned int width,unsigned int height);
		virtual ~CnetSDLContainer();
		void run();
	protected:
		virtual void redrawOnScreen();
		void initSDL();
		void drawPixel(int x, int y,CnetColor pixelColor);
		SDL_Surface *screen;
};

#endif
