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
	void StepCursorLeft();
	void StepCursorRight();
	void UpdateCursorPos();

	const int x = 100;
	const int y = 100;
	const int width = 200;
	const int height = 24;
	bool isSelected = false;
	int cursorPos;
	Text *FontBOS;
	std::list<Text::Character> input;
	std::list<Text::Character>::iterator inputPos;
};

