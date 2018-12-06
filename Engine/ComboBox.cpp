#include "ComboBox.h"

ComboBox::ComboBox()
{
}

ComboBox::ComboBox(int x, int y, int width, int height)
	:
	TextBox(x, y, width, height)
{
	
}

ComboBox::~ComboBox()
{
}

void ComboBox::Draw(Graphics & gfx)
{
	TextBox::Draw(gfx);
}
