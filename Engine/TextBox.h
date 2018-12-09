#pragma once
#include "Element.h"

class TextBox : public Element
{
public:
	TextBox();
	TextBox(int x, int y, int width, int height);
	~TextBox();

	virtual void Draw(Graphics& gfx) override;

	virtual void Input(char keycode);
	virtual void CheckForCursor(int x, int y);
	virtual void StepCursorLeft();
	virtual void StepCursorRight();
	virtual void UpdateCursorPos();
	int InputWidth();

	int cursorPos;
	int blinker;
	std::list<Font::Character> input;
	std::list<Font::Character>::iterator inputPos;
};

