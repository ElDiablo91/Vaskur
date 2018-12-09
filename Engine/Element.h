#pragma once
#include "Font.h"
#include "Graphics.h"


class Element
{
public:
	Element();
	Element(int x, int y, int width, int height);
	~Element();


	virtual void Draw(Graphics& gfx) { };

	virtual void Input(char keycode) { };
	virtual void CheckForCursor(int x, int y) { };
	virtual void StepCursorLeft() { };
	virtual void StepCursorRight() { };
	virtual void UpdateCursorPos() { };
	virtual bool IsSelected() { return isSelected; }

	static Font FontBOS;
protected:
	bool isSelected;
	int x;
	int y;
	int width;
	int height;
};

