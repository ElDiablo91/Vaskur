#include "TextBox.h"
#include <iostream>

TextBox::TextBox()
{
}

TextBox::TextBox(int x, int y, int width, int height)
	:
	Element(x, y, width, height)
{
	cursorPos = x;
	blinker = 0;
	input.push_back(Font::START);
	inputPos = input.begin();
}

TextBox::~TextBox()
{
}

void TextBox::Draw(Graphics & gfx)
{
	int x0 = x;
	int x1 = x + width;
	int y0 = y;
	int y1 = y + height;

	gfx.DrawRect(x0, y0, x1, y1, Colors::White); //background
	gfx.DrawLineRect(x0 - 1, y0 - 1, x1 + 1, y1 + 1, Colors::Black); //boarder

	int renderPos = x;
	for each (Font::Character i in input)	//Draw text	
	{
		renderPos += i.leftPadding;
		int yOffset = (i.bitmapPos / FontBOS.fontBitmap->GetWidth()) * 23;
		int xOffset = i.bitmapPos % FontBOS.fontBitmap->GetWidth();
		//þarf að hald utan um cursorpos í clasanum til að geta teiknað curosorinn
		for (int sy = y; sy < y + 23; sy++)
		{
			for (int sx = renderPos, tempX = xOffset; sx < renderPos + i.width; sx++, tempX++)
			{	//tempX because we need to reuse xOffset
				Color pixel = FontBOS.fontBitmap->GetPixel(tempX, yOffset);
				if (pixel != Colors::White)
				{
					gfx.PutPixel(sx, sy, pixel);
				}
			}
			yOffset++;
		}
		renderPos += i.width + i.rightPadding;
	}

	if (isSelected && blinker > 30) //blinking cursor
	{

		gfx.DrawLineV(cursorPos    , y0 + 3, y1 - 3, Colors::Black);
		gfx.DrawLineV(cursorPos + 1, y0 + 3, y1 - 3, Colors::Black);
		if (blinker > 60)
		{
			blinker = 0;
		}
	}
	if (isSelected)
	{
		blinker++;
	}
}

void TextBox::CheckForCursor(int mx, int my)
{
	int renderPos = x;
	int y1 = y + height;
	int x1 = x + width;
	if (my > y && my < y1 && mx > x && mx < x1)
	{
		isSelected = true;
		for (auto i = input.begin(); i != input.end(); i++)
		{
			int w = i->leftPadding + i->width + i->rightPadding;
			int halfW = renderPos + (w >> 1) -2;
			int nextHalfW = halfW + w + 2;
			if (mx > halfW && mx < nextHalfW)
			{
				inputPos = i;
				break;
			}
			else
			{
				inputPos = input.end();
				inputPos--;
			}
			renderPos += w;
		}
	}
	else
	{
		isSelected = false;
	}
}


void TextBox::StepCursorLeft()
{
	if (inputPos->charValue != '\0')
	{
		inputPos--;
	}
}

void TextBox::StepCursorRight()
{
	std::list<Font::Character>::iterator next = inputPos;
	next++;
	if (next != input.end())
	{
		inputPos++;
	}
}

void TextBox::UpdateCursorPos()
{
	std::list<Font::Character>::iterator i;
	int temp = 0;
	for(i = input.begin(); i != inputPos; i++)
	{
		temp += i->leftPadding + i->width + i->rightPadding;
	}
	temp += i->leftPadding + i->width + i->rightPadding;

	cursorPos = temp + x;
}

int TextBox::InputWidth()
{
	int w = 0;
	
	for each (auto i in input)
	{
		w += i.leftPadding + i.width + i.rightPadding;
	}
		
	return w;
}


void TextBox::Input(MainWindow& wnd)
{

	if (!wnd.mouse.LeftIsPressed()) click = true; //only allow clicks, simple 2 frame gate

	if (wnd.mouse.LeftIsPressed() && click)
	{
		CheckForCursor(wnd.mouse.GetPosX(), wnd.mouse.GetPosY());
		UpdateCursorPos();

		if (wnd.mouse.LeftIsPressed()) click = false;
	}
	else if (isSelected && !wnd.kbd.CharIsEmpty())
	{
		char keycode = wnd.kbd.ReadChar();

		if (keycode == 0x08) //Backspace
		{
			if (inputPos->charValue != '\0')
			{
				input.erase(inputPos--);
			}
		}
		else
		{
			//Have to go one farword before inserting 
			//because insert() places value befroe the iterator 
			//not after as we would like for this case
			//This is fine because list has End iterator
			input.insert(++inputPos, FontBOS.charMap[keycode]);
			//then simply back it up after we are done inserting
			inputPos--;
			//making sure we don't go outside the box
			if (InputWidth() > width - 2)
			{
				input.erase(inputPos--);
			}
		}

		const auto e = wnd.kbd.ReadKey();
		if (e.GetCode() == VK_LEFT && e.IsPress())
		{
			StepCursorLeft();
		}
		if (e.GetCode() == VK_RIGHT && e.IsPress())
		{
			StepCursorRight();
		}

		UpdateCursorPos();
	}
}


