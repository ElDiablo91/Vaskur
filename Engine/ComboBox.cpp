#include "ComboBox.h"

ComboBox::ComboBox()
{
}

ComboBox::ComboBox(int x, int y, int width, int height)
	:
	TextBox(x, y, width-16, height),
	arrowDownX(x+width-16),
	arrowDownY(y),
	arrowDownWidth(16),
	arrowDownHeight(height),
	isDropDown(false)
{
	
}

ComboBox::~ComboBox()
{
}

void ComboBox::Input(MainWindow& wnd)
{
	TextBox::Input(wnd);
	if (input.size() > 1)
		Search();
}

void ComboBox::Draw(Graphics & gfx)
{
	TextBox::Draw(gfx);
	//arrow background
	gfx.DrawRectDim(x + width, y, 16, height, Colors::Green);
	//arrow bourder
	gfx.DrawLineRectDim(arrowDownX-1, arrowDownY-1, arrowDownWidth + 2, arrowDownHeight + 2, Colors::Black);
	
	//arrow
	int x0 = arrowDownX + 3;
	int x1 = arrowDownX + 13;
	for (int i = 0; i < 20; i++)
	{
		gfx.DrawLineH(arrowDownY + 8 + i++, x0++, x1--, Colors::Black);
		gfx.DrawLineH(arrowDownY + 8 + i,   x0,   x1  , Colors::Black);
	}

	if (isDropDown)
	{
		std::list<std::list<Font::Character>>::iterator dropDownIter = dropDownList.begin();

		for (int i = 0; i < dropDownList.size(); i++)
		{
			gfx.DrawRectDim(x, y + height + (height*i), width + arrowDownWidth, height, Colors::White);
			int renderPos = x;
			for each (Font::Character c in *(dropDownIter++))	//Draw text	
			{
				renderPos += c.leftPadding;
				int yOffset = (c.bitmapPos / FontBOS.fontBitmap->GetWidth()) * 23;
				int xOffset = c.bitmapPos % FontBOS.fontBitmap->GetWidth();
				for (int sy = y + height + (i*24); sy < y + (height*2) + (i * 24); sy++)
				{
					for (int sx = renderPos, tempX = xOffset; sx < renderPos + c.width; sx++, tempX++)
					{	//tempX because we need to reuse xOffset
						Color pixel = FontBOS.fontBitmap->GetPixel(tempX, yOffset);
						if (pixel != Colors::White)
						{
							gfx.PutPixel(sx, sy, Colors::Black);
						}
					}
					yOffset++;
				}
				renderPos += c.width + c.rightPadding;
			}
		}
	}
	else if (input.size() > 1)
	{
		std::list<std::list<Font::Character>>::iterator dropDownIter = searchList.begin();

		for (int i = 0; i < searchList.size(); i++)
		{
			gfx.DrawRectDim(x, y + height + (height*i), width + arrowDownWidth, height, Colors::White);
			int renderPos = x;
			for each (Font::Character c in *(dropDownIter++))	//Draw text	
			{
				renderPos += c.leftPadding;
				int yOffset = (c.bitmapPos / FontBOS.fontBitmap->GetWidth()) * 23;
				int xOffset = c.bitmapPos % FontBOS.fontBitmap->GetWidth();
				for (int sy = y + height + (i * 24); sy < y + (height * 2) + (i * 24); sy++)
				{
					for (int sx = renderPos, tempX = xOffset; sx < renderPos + c.width; sx++, tempX++)
					{	//tempX because we need to reuse xOffset
						Color pixel = FontBOS.fontBitmap->GetPixel(tempX, yOffset);
						if (pixel != Colors::White)
						{
							gfx.PutPixel(sx, sy, Colors::Black);
						}
					}
					yOffset++;
				}
				renderPos += c.width + c.rightPadding;
			}
		}
	}
}

void ComboBox::CheckForCursor(int mx, int my)
{
	TextBox::CheckForCursor(mx, my);

	int y1 = arrowDownY + arrowDownHeight;
	int x1 = arrowDownX + arrowDownWidth;

	if (my > arrowDownY && my < y1 && mx > arrowDownX && mx < x1)
	{
		if (isDropDown)
		{
			isDropDown = false;
		}
		else
		{
			isDropDown = true;
		}
		isSelected = true;
	}
	else
	{
		isDropDown = false;
	}
}

void ComboBox::AddToList(std::list<Font::Character> l)
{
	dropDownList.push_back(l);
}

void ComboBox::Search()
{
	searchList = dropDownList;
	

	for (auto ddlIter = searchList.begin(); ddlIter != searchList.end();)
	{
		if (!IsEqual(*ddlIter))
		{
			ddlIter = searchList.erase(ddlIter);
		}
		else
		{
			ddlIter++;
		}
	}
}

bool ComboBox::IsEqual(std::list<Font::Character> l)
{
	for (int i = 0; i < input.size(); i++)
	{
		auto inputIter = input.begin();
		std::advance(inputIter, i);

		auto listCharIter = l.begin();
		if (input.size() <= l.size())
		{
			std::advance(listCharIter, i);
			if (listCharIter->charValue != inputIter->charValue)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}


