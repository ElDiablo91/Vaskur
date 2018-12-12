#include "Element.h"

Element::Element()
{
}

Element::Element(int x, int y, int width, int height)
	:
	x(x),
	y(y),
	width(width),
	height(height),
	isSelected(false)
{
}

Element::~Element()
{
}

