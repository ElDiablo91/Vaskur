#pragma once
#include "Element.h"

class TextBox : public Element
{
public:
	TextBox();
	TextBox(int x, int y, int width, int height);
	~TextBox();

	void Draw(Graphics& gfx) override;
	void Input(MainWindow& wnd) override;
	
	virtual void CheckForCursor(int x, int y);

    void StepCursorLeft();
    void StepCursorRight();
    void UpdateCursorPos();
	int InputWidth();

	bool click = true; //dont want to run mouse checks a million times
	int cursorPos;
	int blinker;
	std::list<Font::Character> input;
	std::list<Font::Character>::iterator inputPos;
};

