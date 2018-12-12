/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include <string>

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	box(100,100,300,24),
	cBox(100,200,300,24),
	text(100,300,"Kalli litli kónguló, klifraði upp í tré. Fjandin bjáni"),
	eList({&box, &cBox, &text })
{
	std::list<Font::Character> temp = box.FontBOS.StringToTextList("yolo");
	box.input.insert(++box.inputPos, temp.begin(), temp.end());
	box.inputPos--;
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	std::list<Element*>::iterator selected = eList.end();
	for(auto element = eList.begin(); element != eList.end(); element++)
	{
		(*element)->Input(wnd);
		if ((*element)->IsSelected())
		{
			selected = element;
		}
	}
	if(selected != eList.end())
		eList.splice(eList.end(), eList, selected);
	//ef ekkert er selectað þá hendum við öllu inputti sem 
	//kemur af lyklaborðinu
	wnd.kbd.Flush();
}

void Game::ComposeFrame()
{
	for each(auto element in eList)
	{
		element->Draw(gfx);
	}
}
