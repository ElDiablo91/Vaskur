#pragma once
#include "Element.h"

class Text : public Element	
{
public:
	Text();
	Text(int x, int y, std::string text);

	void Draw(Graphics& gfx) override;

private:
	std::list<Font::Character> text;
};