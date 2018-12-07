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
	eList({&box, &cBox})
{
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
	//ekki láta element erfa Text???
	//
	for each (auto element in eList)
	{
		
		if (wnd.mouse.LeftIsPressed())
		{
			element->CheckForCursor(wnd.mouse.GetPosX(), wnd.mouse.GetPosY());
			element->UpdateCursorPos();
		}

		if (element->IsSelected())
		{
			if (!wnd.kbd.CharIsEmpty())
			{
				char k = wnd.kbd.ReadChar();
				element->Input(k);

				std::string x(1, k);
				OutputDebugStringA(x.c_str());

				element->UpdateCursorPos();
			}
			const auto e = wnd.kbd.ReadKey();
			if (e.GetCode() == VK_LEFT && e.IsPress())
			{
				element->StepCursorLeft();
				element->UpdateCursorPos();
			}
			if (e.GetCode() == VK_RIGHT && e.IsPress())
			{
				element->StepCursorRight();
				element->UpdateCursorPos();
			}
		}
	}
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
