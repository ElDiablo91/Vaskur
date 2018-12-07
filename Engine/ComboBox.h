#pragma once
#include "TextBox.h"

class ComboBox : public TextBox
{
public:
	ComboBox();
	ComboBox(int x, int y, int width, int height);
	~ComboBox();
	
	void Input(char keycode);
	void Draw(Graphics& gfx);
private:
	int arrowDownX;
	int arrowDownY;
	int arrowDownWidth;
	int arrowDownHeight;
};
