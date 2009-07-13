/*******************************************
           Project : Tutorat C++
           Author  : Sébastien Valat
           Date    : 11/04/2009
           Licence : GPLv2
*******************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "CnetSDLContainer.h"
#include <stdio.h>
#include <SDL_endian.h> /* Used for the endian-dependent 24 bpp mode */


CnetSDLContainer::CnetSDLContainer(unsigned int width,unsigned int height)
	:CnetMainContainer(width,height)
{
}

CnetSDLContainer::~CnetSDLContainer()
{
}

void CnetSDLContainer::initSDL()
{
	if ( SDL_Init(SDL_INIT_VIDEO) < 0 ) {
		fprintf(stderr, "Impossible d'initialiser SDL: %s\n", SDL_GetError());
		exit(1);
	}
	atexit(SDL_Quit);

	//init screen
	screen = SDL_SetVideoMode(this->getWidth(),this->getHeight(), 16, SDL_SWSURFACE);
	if ( screen == NULL ) {
		fprintf(stderr, "Impossible de passer en %dx%d en 16 bpp: %s\n",this->getWidth(),this->getHeight(), SDL_GetError());
		exit(1);
	}

	//repeat key
	SDL_EnableKeyRepeat(300, 30);
}

void CnetSDLContainer::run()
{
	//init
	this->initSDL();
	//curses
	//loop
	bool run = true;
	bool needRefresh = true;
	Uint32 t = 0;
	//tant que pas echape
	while (run)
	{
		if (needRefresh && SDL_GetTicks()-t>100/60)
		{
			this->refresh();
			t = SDL_GetTicks();
		}


		//evenement clavier
		SDL_Event event;
		needRefresh = false;
		SDL_WaitEvent(&event);

		do {
		switch (event.type)
		{
			case SDL_KEYDOWN: {
				char k = event.key.keysym.sym;
				if (event.key.keysym.sym==SDLK_BACKSPACE)
					k=127;
				printf("La touche %s => %c a été préssée!\n",
					   SDL_GetKeyName(event.key.keysym.sym),k);
				this->sendKeyPess(k);
				needRefresh = true;
				break;}
			case SDL_MOUSEMOTION:
				this->setMousePosition(event.motion.x, event.motion.y);
				needRefresh = true;
				break;
			case SDL_MOUSEBUTTONDOWN:
				printf("Le bouton %d de la souris a été préssé en (%d,%d)\n",
					   event.button.button, event.button.x, event.button.y);
				this->sendMouseDown();
				needRefresh = true;
				break;
			case SDL_MOUSEBUTTONUP:
				printf("Le bouton %d de la souris a été relaché en (%d,%d)\n",
					   event.button.button, event.button.x, event.button.y);
				this->sendMouseUp();
				needRefresh = true;
				break;
			case SDL_QUIT:
				exit(0);
		}} while(SDL_PollEvent(&event));
	}
}

void CnetSDLContainer::redrawOnScreen()
{
	//on bloque l'écran
	if ( SDL_MUSTLOCK(screen) ) {
		if ( SDL_LockSurface(screen) < 0 ) {
			return;
		}
	}

	for (unsigned int x=0;x<this->image->getWidth();x++)
		for (unsigned int y=0;y<this->image->getHeight();y++)
			drawPixel(x,y,this->image->getPixel(x,y));

	//on debloque
	if ( SDL_MUSTLOCK(screen) ) {
		SDL_UnlockSurface(screen);
	}
	SDL_UpdateRect(screen, 0, 0, this->getWidth(), this->getHeight());
}

void CnetSDLContainer::drawPixel(int x, int y,CnetColor pixelColor)
{
	Uint32 color = SDL_MapRGB(screen->format, pixelColor, pixelColor, pixelColor);

	switch (screen->format->BytesPerPixel) {
		case 1: { /*On gère le mode 8bpp */
			Uint8 *bufp;

			bufp = (Uint8 *)screen->pixels + y*screen->pitch + x;
			*bufp = color;
		}
		break;

		case 2: { /* Certainement 15 ou 16 bpp */
			Uint16 *bufp;

			bufp = (Uint16 *)screen->pixels + y*screen->pitch/2 + x;
			*bufp = color;
		}
		break;

		case 3: { /* 24 bpp lent et généralement pas utilisé */
			Uint8 *bufp;

			bufp = (Uint8 *)screen->pixels + y*screen->pitch + x * 3;
			if(SDL_BYTEORDER == SDL_LIL_ENDIAN) {
				bufp[0] = color;
				bufp[1] = color >> 8;
				bufp[2] = color >> 16;
			} else {
				bufp[2] = color;
				bufp[1] = color >> 8;
				bufp[0] = color >> 16;
			}
		}
		break;

		case 4: { /* Probablement 32 bpp alors */
			Uint32 *bufp;

			bufp = (Uint32 *)screen->pixels + y*screen->pitch/4 + x;
			*bufp = color;
		}
		break;
	}
}
