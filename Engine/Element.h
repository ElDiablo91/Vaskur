#pragma once
#include "Text.h"
#include "Graphics.h"


class Element
{
public:
	Element();
	Element(int x, int y, int width, int height);
	~Element();


	virtual void Draw(Graphics& gfx) { };

	static Text FontBOS;
protected:
	bool isSelected;
	int x;
	int y;
	int width;
	int height;
};

