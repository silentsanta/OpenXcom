/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __MAINMENUSTATE_H__
#define __MAINMENUSTATE_H__

#include "State.h"
#include "Palette.h"
#include "Button.h"
#include "Window.h"
#include "Text.h"
#include "NewGameState.h"

class MainMenuState : public State
{
private:
	Button *_buttonNew, *_buttonLoad, *_buttonQuit;
	Window *_window;
	Text *_title;
public:
	MainMenuState(Game *game);
	~MainMenuState();
	void handle(SDL_Event *ev, int scale);
	void think();
	void blit();
	void buttonNewClick(SDL_Event *ev);
	void buttonLoadClick(SDL_Event *ev);
	void buttonQuitClick(SDL_Event *ev);
};

#endif