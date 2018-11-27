#pragma once
#include "Text.h"
#include <list>

class TextBox
{
public:
	TextBox();
	~TextBox();

	void CheckForCursor(int x, int y);
	void Input(char keycode);

	const int x = 100;
	const int y = 100;
	const int width = 200;
	const int height = 30;
	int cursorPos;
	bool isSelected = false;
	Text *FontBOS;
	std::list<std::pair<Text::Character, int>> input;
};

