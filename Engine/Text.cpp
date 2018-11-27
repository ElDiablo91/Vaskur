#include "Text.h"

Text::Text(const std::string filename)
	:
	fontBitmap(new Surface(filename))
{
	
}

Text::~Text()
{
	delete fontBitmap;
}
