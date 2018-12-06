#pragma once
#include "TextBox.h"

class ComboBox : public TextBox
{
public:
	ComboBox();
	ComboBox(int x, int y, int width, int height);
	~ComboBox();
	
	void Draw(Graphics& gfx) override;
};
