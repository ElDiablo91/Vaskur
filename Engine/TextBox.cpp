#include "TextBox.h"
#include <iostream>

TextBox::TextBox()
	:
	FontBOS(new Text("Font_bookman_old_style.bmp")),
	cursorPos(x)
{
	input.push_back(Text::START);
	inputPos = input.begin();
}

TextBox::~TextBox()
{
	delete FontBOS;
}

void TextBox::CheckForCursor(int mx, int my)
{
	int renderPos = x;
	int y1 = y + height;
	int x1 = x + width;
	if (my > y && my < y1 && mx > x && mx < x1)
	{
		isSelected = true;
		for(auto i = input.begin(); i != input.end(); i++)
		{
			int w = i->leftPadding + i->width + i->rightPadding;
			int halfW = renderPos + (w >> 1);
			int nextHalfW = halfW + w;
			if (mx > halfW && mx < nextHalfW)
			{
				inputPos = i;
				break;
			}
			else
			{
				inputPos = input.end();
				inputPos--;
			}
			renderPos += w;
		}
	}
	else
	{
		isSelected = false;
	}
}

void TextBox::Input(char keycode)
{
	if (isSelected)
	{
		if (keycode == 0x08)
		{
			if (input.size() > 1)
			{
				input.erase(inputPos--);
			}
		}
		else
		{
			switch (keycode)
			{
			case 'A':
				input.insert(++inputPos ,Text::A);
				break;
			case 'a':
				input.insert(++inputPos ,Text::a);
				break;
			case 'B':
				input.insert(++inputPos ,Text::B);
				break;
			case 'b':
				input.insert(++inputPos ,Text::b);
				break;
			case 'C':
				input.insert(++inputPos ,Text::C);
				break;
			case 'c':
				input.insert(++inputPos ,Text::c);
				break;
			case 'D':
				input.insert(++inputPos ,Text::D);
				break;
			case 'd':
				input.insert(++inputPos ,Text::d);
				break;
			case 'E':
				input.insert(++inputPos ,Text::E);
				break;
			case 'e':
				input.insert(++inputPos ,Text::e);
				break;
			case 'F':
				input.insert(++inputPos, Text::F);
				break;
			case 'f':
				input.insert(++inputPos ,Text::f);
				break;
			case 'G':
				input.insert(++inputPos ,Text::G);
				break;
			case 'g':
				input.insert(++inputPos ,Text::g);
				break;
			case 'H':
				input.insert(++inputPos ,Text::H);
				break;
			case 'h':
				input.insert(++inputPos ,Text::h);
				break;
			case 'I':
				input.insert(++inputPos ,Text::I);
				break;
			case 'i':
				input.insert(++inputPos ,Text::i);
				break;
			case 'J':
				input.insert(++inputPos ,Text::J);
				break;
			case 'j':
				input.insert(++inputPos ,Text::j);
				break;
			case 'K':
				input.insert(++inputPos ,Text::K);
				break;
			case 'k':
				input.insert(++inputPos ,Text::k);
				break;
			case 'L':
				input.insert(++inputPos ,Text::L);
				break;
			case 'l':
				input.insert(++inputPos ,Text::l);
				break;
			case 'M':
				input.insert(++inputPos ,Text::M);
				break;
			case 'm':
				input.insert(++inputPos ,Text::m);
				break;
			case 'N':
				input.insert(++inputPos ,Text::N);
				break;
			case 'n':
				input.insert(++inputPos ,Text::n);
				break;
			case 'O':
				input.insert(++inputPos ,Text::O);
				break;
			case 'o':
				input.insert(++inputPos ,Text::o);
				break;
			case 'P':
				input.insert(++inputPos ,Text::P);
				break;
			case 'p':
				input.insert(++inputPos ,Text::p);
				break;
			case 'Q':
				input.insert(++inputPos ,Text::Q);
				break;
			case 'q':
				input.insert(++inputPos ,Text::q);
				break;
			case 'R':
				input.insert(++inputPos ,Text::R);
				break;
			case 'r':
				input.insert(++inputPos ,Text::r);
				break;
			case 'S':
				input.insert(++inputPos ,Text::S);
				break;
			case 's':
				input.insert(++inputPos ,Text::s);
				break;
			case 'T':
				input.insert(++inputPos ,Text::T);
				break;
			case 't':
				input.insert(++inputPos ,Text::t);
				break;
			case 'U':
				input.insert(++inputPos ,Text::U);
				break;
			case 'u':
				input.insert(++inputPos ,Text::u);
				break;
			case 'V':
				input.insert(++inputPos ,Text::V);
				break;
			case 'v':
				input.insert(++inputPos ,Text::v);
				break;
			case 'W':
				input.insert(++inputPos ,Text::W);
				break;
			case 'w':
				input.insert(++inputPos ,Text::w);
				break;
			case 'X':
				input.insert(++inputPos ,Text::X);
				break;
			case 'x':
				input.insert(++inputPos ,Text::x);
				break;
			case 'Y':
				input.insert(++inputPos ,Text::Y);
				break;
			case 'y':
				input.insert(++inputPos ,Text::y);
				break;
			case 'Z':
				input.insert(++inputPos ,Text::Z);
				break;
			case 'z':
				input.insert(++inputPos ,Text::z);
				break;
			case 'Á':
				input.insert(++inputPos ,Text::Á);
				break;
			case 'á':
				input.insert(++inputPos ,Text::á);
				break;
			case 'Ð':
				input.insert(++inputPos ,Text::Ð);
				break;
			case 'ð':
				input.insert(++inputPos ,Text::ð);
				break;
			case 'É':
				input.insert(++inputPos ,Text::É);
				break;
			case 'é':
				input.insert(++inputPos ,Text::é);
				break;
			case 'Í':
				input.insert(++inputPos ,Text::Í);
				break;
			case 'í':
				input.insert(++inputPos ,Text::í);
				break;
			case 'Ó':
				input.insert(++inputPos ,Text::Ó);
				break;
			case 'ó':
				input.insert(++inputPos ,Text::ó);
				break;
			case 'Ú':
				input.insert(++inputPos ,Text::Ú);
				break;
			case 'ú':
				input.insert(++inputPos ,Text::ú);
				break;
			case 'Ý':
				input.insert(++inputPos ,Text::Ý);
				break;
			case 'ý':
				input.insert(++inputPos ,Text::ý);
				break;
			case 'Þ':
				input.insert(++inputPos ,Text::Þ);
				break;
			case 'þ':
				input.insert(++inputPos ,Text::þ);
				break;
			case 'Æ':
				input.insert(++inputPos ,Text::Æ);
				break;
			case 'æ':
				input.insert(++inputPos ,Text::æ);
				break;
			case 'Ö':
				input.insert(++inputPos ,Text::Ö);
				break;
			case 'ö':
				input.insert(++inputPos ,Text::ö);
				break;
			case ' ':
				input.insert(++inputPos ,Text::SPACE);
				break;
			case '!':
				input.insert(++inputPos ,Text::EXCLAMATION);
				break;
			case '"':
				input.insert(++inputPos ,Text::DOUBLE_QUOTE);
				break;
			case '#':
				input.insert(++inputPos ,Text::POUND_SIGN);
				break;
			case '$':
				input.insert(++inputPos ,Text::DOLLAR_SIGN);
				break;
			case '%':
				input.insert(++inputPos ,Text::PERCENT);
				break;
			case '&':
				input.insert(++inputPos ,Text::AMPERSAND);
				break;
			case '/':
				input.insert(++inputPos ,Text::FORWARD_SLASH);
				break;
			case '(':
				input.insert(++inputPos ,Text::LEFT_BRACKET);
				break;
			case ')':
				input.insert(++inputPos ,Text::RIGHT_BRACKET);
				break;
			case '[':
				input.insert(++inputPos ,Text::L_SQUERE_BRACKET);
				break;
			case ']':
				input.insert(++inputPos ,Text::R_SQUERE_BRACKET);
				break;
			case '{':
				input.insert(++inputPos ,Text::L_CURLY_BRACKET);
				break;
			case '}':
				input.insert(++inputPos ,Text::R_CURLY_BRACKET);
				break;
			case '=':
				input.insert(++inputPos ,Text::EQUALS_SIGN);
				break;
			case '_':
				input.insert(++inputPos ,Text::UNDERSCORE);
				break;
			case '\\':
				input.insert(++inputPos ,Text::BACK_SLASH);
				break;
			case '<':
				input.insert(++inputPos ,Text::LESS_THEN);
				break;
			case '>':
				input.insert(++inputPos ,Text::GREATER_THEN);
				break;
			case '+':
				input.insert(++inputPos ,Text::PLUS_SIGN);
				break;
			case '-':
				input.insert(++inputPos ,Text::DASH);
				break;
			case '@':
				input.insert(++inputPos ,Text::ATT);
				break;
			case '?':
				input.insert(++inputPos ,Text::QUESTION_MARK);
				break;
			case ':':
				input.insert(++inputPos ,Text::COLON);
				break;
			case ';':
				input.insert(++inputPos ,Text::SEMI_COLON);
				break;
			case '.':
				input.insert(++inputPos ,Text::DOT);
				break;
			case ',':
				input.insert(++inputPos ,Text::KOMMA);
				break;
			case '\'':
				input.insert(++inputPos ,Text::SINGLE_QUOTE);
				break;
			case '~':
				input.insert(++inputPos ,Text::TILDE);
				break;
			case '0':
				input.insert(++inputPos ,Text::ZERO);
				break;
			case '1':
				input.insert(++inputPos ,Text::ONE);
				break;
			case '2':
				input.insert(++inputPos ,Text::TWO);
				break;
			case '3':
				input.insert(++inputPos ,Text::THREE);
				break;
			case '4':
				input.insert(++inputPos ,Text::FOUR);
				break;
			case '5':
				input.insert(++inputPos ,Text::FIVE);
				break;
			case '6':
				input.insert(++inputPos ,Text::SIX);
				break;
			case '7':
				input.insert(++inputPos ,Text::SEVEN);
				break;
			case '8':
				input.insert(++inputPos ,Text::EIGHT);
				break;
			case '9':
				input.insert(++inputPos ,Text::NINE);
				break;
			default:
				break;
			}
			inputPos--;
			if (InputWidth() > width)
			{
				input.erase(inputPos--);
			}
		}
	}
}

void TextBox::StepCursorLeft()
{
	if (input.size() > 1)
	{
		inputPos--;
	}
}

void TextBox::StepCursorRight()
{
	std::list<Text::Character>::iterator next = inputPos;
	next++;
	if (next != input.end())
	{
		inputPos++;
	}
}

void TextBox::UpdateCursorPos()
{
	std::list<Text::Character>::iterator i;
	int temp = 0;
	for(i = input.begin(); i != inputPos; i++)
	{
		temp += i->leftPadding + i->width + i->rightPadding;
	}
	temp += i->leftPadding + i->width + i->rightPadding;

	cursorPos = temp + x;
}

int TextBox::InputWidth()
{
	int w = 0;
	
	for each (auto i in input)
	{
		w += i.leftPadding + i.width + i.rightPadding;
	}
		
	return w;
}


