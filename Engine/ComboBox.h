#pragma once
#include "TextBox.h"

class ComboBox : public TextBox
{
public:
	ComboBox();
	ComboBox(int x, int y, int width, int height);
	~ComboBox();
	
	void Input(MainWindow& wnd) override;
	void Draw(Graphics& gfx) override;
	void CheckForCursor(int x, int y) override;
private:
private:
	int arrowDownX;
	int arrowDownY;
	int arrowDownWidth;
	int arrowDownHeight;
	bool isDropDown;
};
