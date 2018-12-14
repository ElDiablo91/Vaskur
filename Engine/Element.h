#pragma once
#include "Font.h"
#include "Graphics.h"
#include "MainWindow.h"

class Element
{
public:
	Element();
	Element(int x, int y, int width, int height);
	~Element();

	virtual void Draw(Graphics& gfx) {};
	virtual void Input(MainWindow& wnd) {};

	bool IsSelected() { return isSelected; }

	static Font FontBOS;
protected:
	bool isSelected;
	int x;
	int y;
	int width;
	int height;
};

