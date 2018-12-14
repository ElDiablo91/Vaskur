#include "Text.h"

Text::Text()
{
}

Text::Text(int x, int y, std::string t)
	:
	Element(x,y,0,0)
{
	text = FontBOS.StringToTextList(t);
}

void Text::Draw(Graphics & gfx)
{
	int renderPos = x;
	for each (Font::Character i in text)	//Draw text	
	{
		renderPos += i.leftPadding;
		int yOffset = (i.bitmapPos / FontBOS.fontBitmap->GetWidth()) * 23;
		int xOffset = i.bitmapPos % FontBOS.fontBitmap->GetWidth();
		for (int sy = y; sy < y + 23; sy++)
		{
			for (int sx = renderPos, tempX = xOffset; sx < renderPos + i.width; sx++, tempX++)
			{	//tempX because we need to reuse xOffset
				Color pixel = FontBOS.fontBitmap->GetPixel(tempX, yOffset);
				if (pixel != Colors::White)
				{
					gfx.PutPixel(sx, sy, Colors::Black);
				}
			}
			yOffset++;
		}
		renderPos += i.width + i.rightPadding;
	}
}
