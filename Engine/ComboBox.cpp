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
		gfx.DrawRectDim(x, y + height, width + arrowDownWidth, 200, Colors::White);
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


