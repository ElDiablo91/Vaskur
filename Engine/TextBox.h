#pragma once
#include "Element.h"
#include <list>

class TextBox : public Element
{
public:
	TextBox();
	TextBox(int x, int y, int width, int height);
	~TextBox();

	void Draw(Graphics& gfx) override;

	virtual void Input(char keycode);
	virtual void CheckForCursor(int x, int y);
	virtual void StepCursorLeft();
	virtual void StepCursorRight();
	virtual void UpdateCursorPos();
	virtual bool IsSelected() { return isSelected; }
	int InputWidth();


	int cursorPos;
	int blinker;
	std::list<Text::Character> input;
	std::list<Text::Character>::iterator inputPos;
};

