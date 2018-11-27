#include "TextBox.h"

TextBox::TextBox()
	:
	FontBOS(new Text("Font_bookman_old_style.bmp")),
	cursorPos(100)
{

}

TextBox::~TextBox()
{
	delete FontBOS;
}

void TextBox::CheckForCursor(int mx, int my)
{
	int y1 = y + height;
	int x1 = x + width;
	if (my > y && my < y1 && mx > x && mx < x1)
	{
		isSelected = true;
	}
	else
	{
		isSelected = false;
	}
}

void TextBox::Input(char keycode)
{
	switch (keycode)
	{
	case 'A':
		input.push_back(std::make_pair(Text::A, cursorPos));
		cursorPos += Text::A.width;
		break;
	case 'a':
		input.push_back(std::make_pair(Text::a, cursorPos));
		cursorPos += Text::a.width;
		break;
	case 'B':
		input.push_back(std::make_pair(Text::B, cursorPos));
		cursorPos += Text::B.width;
		break;
	case 'b':
		input.push_back(std::make_pair(Text::b, cursorPos));
		cursorPos += Text::b.width;
		break;
	case 'C':
		input.push_back(std::make_pair(Text::C, cursorPos));
		cursorPos += Text::C.width;
		break;
	case 'c':
		input.push_back(std::make_pair(Text::c, cursorPos));
		cursorPos += Text::c.width;
		break;
	case 'D':
		input.push_back(std::make_pair(Text::D, cursorPos));
		cursorPos += Text::D.width;
		break;
	case 'd':
		input.push_back(std::make_pair(Text::d, cursorPos));
		cursorPos += Text::d.width;
		break;
	case 'E':
		input.push_back(std::make_pair(Text::E, cursorPos));
		cursorPos += Text::E.width;
		break;
	case 'e':
		input.push_back(std::make_pair(Text::e, cursorPos));
		cursorPos += Text::e.width;
		break;
	case 'F':
		input.push_back(std::make_pair(Text::F, cursorPos));
		cursorPos += Text::F.width;
		break;
	case 'f':
		input.push_back(std::make_pair(Text::f, cursorPos));
		cursorPos += Text::f.width;
		break;
	case 'G':
		input.push_back(std::make_pair(Text::G, cursorPos));
		cursorPos += Text::G.width;
		break;
	case 'g':
		input.push_back(std::make_pair(Text::g, cursorPos));
		cursorPos += Text::g.width;
		break;
	case 'H':
		input.push_back(std::make_pair(Text::H, cursorPos));
		cursorPos += Text::H.width;
		break;
	case 'h':
		input.push_back(std::make_pair(Text::h, cursorPos));
		cursorPos += Text::h.width;
		break;
	case 'I':
		input.push_back(std::make_pair(Text::I, cursorPos));
		cursorPos += Text::I.width;
		break;
	case 'i':
		input.push_back(std::make_pair(Text::i, cursorPos));
		cursorPos += Text::i.width;
		break;
	case 'J':
		input.push_back(std::make_pair(Text::J, cursorPos));
		cursorPos += Text::j.width;
		break;
	case 'j':
		input.push_back(std::make_pair(Text::j, cursorPos));
		cursorPos += Text::j.width;
		break;
	case 'K':
		input.push_back(std::make_pair(Text::K, cursorPos));
		cursorPos += Text::K.width;
		break;
	case 'k':
		input.push_back(std::make_pair(Text::k, cursorPos));
		cursorPos += Text::k.width;
		break;
	case 'L':
		input.push_back(std::make_pair(Text::L, cursorPos));
		cursorPos += Text::L.width;
		break;
	case 'l':
		input.push_back(std::make_pair(Text::l, cursorPos));
		cursorPos += Text::l.width;
		break;
	case 'M':
		input.push_back(std::make_pair(Text::M, cursorPos));
		cursorPos += Text::M.width;
		break;
	case 'm':
		input.push_back(std::make_pair(Text::m, cursorPos));
		cursorPos += Text::m.width;
		break;
	case 'N':
		input.push_back(std::make_pair(Text::N, cursorPos));
		cursorPos += Text::N.width;
		break;
	case 'n':
		input.push_back(std::make_pair(Text::n, cursorPos));
		cursorPos += Text::n.width;
		break;
	case 'O':
		input.push_back(std::make_pair(Text::O, cursorPos));
		cursorPos += Text::O.width;
		break;
	case 'o':
		input.push_back(std::make_pair(Text::o, cursorPos));
		cursorPos += Text::o.width;
		break;
	case 'P':
		input.push_back(std::make_pair(Text::P, cursorPos));
		cursorPos += Text::P.width;
		break;
	case 'p':
		input.push_back(std::make_pair(Text::p, cursorPos));
		cursorPos += Text::p.width;
		break;
	case 'Q':
		input.push_back(std::make_pair(Text::Q, cursorPos));
		cursorPos += Text::Q.width;
		break;
	case 'q':
		input.push_back(std::make_pair(Text::q, cursorPos));
		cursorPos += Text::q.width;
		break;
	case 'R':
		input.push_back(std::make_pair(Text::R, cursorPos));
		cursorPos += Text::R.width;
		break;
	case 'r':
		input.push_back(std::make_pair(Text::r, cursorPos));
		cursorPos += Text::r.width;
		break;
	case 'S':
		input.push_back(std::make_pair(Text::S, cursorPos));
		cursorPos += Text::S.width;
		break;
	case 's':
		input.push_back(std::make_pair(Text::s, cursorPos));
		cursorPos += Text::s.width;
		break;
	case 'T':
		input.push_back(std::make_pair(Text::T, cursorPos));
		cursorPos += Text::T.width;
		break;
	case 't':
		input.push_back(std::make_pair(Text::t, cursorPos));
		cursorPos += Text::t.width;
		break;
	case 'U':
		input.push_back(std::make_pair(Text::U, cursorPos));
		cursorPos += Text::U.width;
		break;
	case 'u':
		input.push_back(std::make_pair(Text::u, cursorPos));
		cursorPos += Text::u.width;
		break; 
	case 'V':
		input.push_back(std::make_pair(Text::V, cursorPos));
		cursorPos += Text::V.width;
		break;
	case 'v':
		input.push_back(std::make_pair(Text::v, cursorPos));
		cursorPos += Text::v.width;
		break;
	case 'W':
		input.push_back(std::make_pair(Text::W, cursorPos));
		cursorPos += Text::W.width;
		break;
	case 'w':
		input.push_back(std::make_pair(Text::w, cursorPos));
		cursorPos += Text::w.width;
		break;
	case 'X':
		input.push_back(std::make_pair(Text::X, cursorPos));
		cursorPos += Text::X.width;
		break;
	case 'x':
		input.push_back(std::make_pair(Text::x, cursorPos));
		cursorPos += Text::x.width;
		break;
	case 'Y':
		input.push_back(std::make_pair(Text::Y, cursorPos));
		cursorPos += Text::Y.width;
		break;
	case 'y':
		input.push_back(std::make_pair(Text::y, cursorPos));
		cursorPos += Text::y.width;
		break;
	case 'Z':
		input.push_back(std::make_pair(Text::Z, cursorPos));
		cursorPos += Text::Z.width;
		break;
	case 'z':
		input.push_back(std::make_pair(Text::z, cursorPos));
		cursorPos += Text::z.width;
		break;
	case 'Á':
		input.push_back(std::make_pair(Text::Á, cursorPos));
		cursorPos += Text::Á.width;
		break;
	case 'á':
		input.push_back(std::make_pair(Text::á, cursorPos));
		cursorPos += Text::á.width;
		break;
	case 'Ð':
		input.push_back(std::make_pair(Text::Ð, cursorPos));
		cursorPos += Text::Ð.width;
		break;
	case 'ð':
		input.push_back(std::make_pair(Text::ð, cursorPos));
		cursorPos += Text::ð.width;
		break;
	case 'É':
		input.push_back(std::make_pair(Text::É, cursorPos));
		cursorPos += Text::É.width;
		break;
	case 'é':
		input.push_back(std::make_pair(Text::é, cursorPos));
		cursorPos += Text::é.width;
		break;
	case 'Í':
		input.push_back(std::make_pair(Text::Í, cursorPos));
		cursorPos += Text::Í.width;
		break;
	case 'í':
		input.push_back(std::make_pair(Text::í, cursorPos));
		cursorPos += Text::í.width;
		break;
	case 'Ó':
		input.push_back(std::make_pair(Text::Ó, cursorPos));
		cursorPos += Text::Ó.width;
		break;
	case 'ó':
		input.push_back(std::make_pair(Text::ó, cursorPos));
		cursorPos += Text::ó.width;
		break;
	case 'Ú':
		input.push_back(std::make_pair(Text::Ú, cursorPos));
		cursorPos += Text::Ú.width;
		break;
	case 'ú':
		input.push_back(std::make_pair(Text::ú, cursorPos));
		cursorPos += Text::ú.width;
		break;
	case 'Ý':
		input.push_back(std::make_pair(Text::Ý, cursorPos));
		cursorPos += Text::Ý.width;
		break;
	case 'ý':
		input.push_back(std::make_pair(Text::ý, cursorPos));
		cursorPos += Text::ý.width;
		break;
	case 'Þ':
		input.push_back(std::make_pair(Text::Þ, cursorPos));
		cursorPos += Text::Þ.width;
		break;
	case 'þ':
		input.push_back(std::make_pair(Text::þ, cursorPos));
		cursorPos += Text::þ.width;
		break;
	case 'Æ':
		input.push_back(std::make_pair(Text::Æ, cursorPos));
		cursorPos += Text::Æ.width;
		break;
	case 'æ':
		input.push_back(std::make_pair(Text::æ, cursorPos));
		cursorPos += Text::æ.width;
		break;
	case 'Ö':
		input.push_back(std::make_pair(Text::Ö, cursorPos));
		cursorPos += Text::Ö.width;
		break;
	case 'ö':
		input.push_back(std::make_pair(Text::ö, cursorPos));
		cursorPos += Text::ö.width;
		break;
	case ' ': 
		input.push_back(std::make_pair(Text::SPACE, cursorPos ));
		cursorPos += Text::SPACE.width;
		break;
	case '!':
		input.push_back(std::make_pair(Text::EXCLAMATION, cursorPos));
		cursorPos += Text::EXCLAMATION.width;
		break;
	case '"':
		input.push_back(std::make_pair(Text::DOUBLE_QUOTE, cursorPos));
		cursorPos += Text::DOUBLE_QUOTE.width;
		break;
	case '#':
		input.push_back(std::make_pair(Text::POUND_SIGN, cursorPos));
		cursorPos += Text::POUND_SIGN.width;
		break;
	case '$':
		input.push_back(std::make_pair(Text::DOLLAR_SIGN, cursorPos));
		cursorPos += Text::DOLLAR_SIGN.width;
		break;
	case '%':
		input.push_back(std::make_pair(Text::PERCENT, cursorPos));
		cursorPos += Text::PERCENT.width;
		break;
	case '&':
		input.push_back(std::make_pair(Text::AMPERSAND, cursorPos));
		cursorPos += Text::AMPERSAND.width;
		break;
	case '/':
		input.push_back(std::make_pair(Text::FORWARD_SLASH, cursorPos));
		cursorPos += Text::FORWARD_SLASH.width;
		break;
	case '(':
		input.push_back(std::make_pair(Text::LEFT_BRACKET, cursorPos));
		cursorPos += Text::LEFT_BRACKET.width;
		break;
	case ')':
		input.push_back(std::make_pair(Text::RIGHT_BRACKET, cursorPos));
		cursorPos += Text::RIGHT_BRACKET.width;
		break;
	case '[':
		input.push_back(std::make_pair(Text::L_SQUERE_BRACKET, cursorPos));
		cursorPos += Text::L_SQUERE_BRACKET.width;
		break;
	case ']':
		input.push_back(std::make_pair(Text::R_SQUERE_BRACKET, cursorPos));
		cursorPos += Text::R_SQUERE_BRACKET.width;
		break;
	case '{':
		input.push_back(std::make_pair(Text::L_CURLY_BRACKET, cursorPos));
		cursorPos += Text::L_CURLY_BRACKET.width;
		break;
	case '}':
		input.push_back(std::make_pair(Text::R_CURLY_BRACKET, cursorPos));
		cursorPos += Text::R_CURLY_BRACKET.width;
		break;
	case '=':
		input.push_back(std::make_pair(Text::EQUALS_SIGN, cursorPos));
		cursorPos += Text::EQUALS_SIGN.width;
		break;
	case '_':
		input.push_back(std::make_pair(Text::UNDERSCORE, cursorPos));
		cursorPos += Text::UNDERSCORE.width;
		break;
	case '\\':
		input.push_back(std::make_pair(Text::BACK_SLASH, cursorPos));
		cursorPos += Text::BACK_SLASH.width;
		break;
	case '<':
		input.push_back(std::make_pair(Text::LESS_THEN, cursorPos));
		cursorPos += Text::LESS_THEN.width;
		break;
	case '>':
		input.push_back(std::make_pair(Text::GREATER_THEN, cursorPos));
		cursorPos += Text::GREATER_THEN.width;
		break;
	case '+':
		input.push_back(std::make_pair(Text::PLUS_SIGN, cursorPos));
		cursorPos += Text::PLUS_SIGN.width;
		break;
	case '-':
		input.push_back(std::make_pair(Text::DASH, cursorPos));
		cursorPos += Text::DASH.width;
		break;
	case '@':
		input.push_back(std::make_pair(Text::ATT, cursorPos));
		cursorPos += Text::ATT.width;
		break;
	case '?':
		input.push_back(std::make_pair(Text::QUESTION_MARK, cursorPos));
		cursorPos += Text::QUESTION_MARK.width;
		break;
	case ':':
		input.push_back(std::make_pair(Text::COLON, cursorPos));
		cursorPos += Text::COLON.width;
		break;
	case ';':
		input.push_back(std::make_pair(Text::SEMI_COLON, cursorPos));
		cursorPos += Text::SEMI_COLON.width;
		break;
	case '.':
		input.push_back(std::make_pair(Text::DOT, cursorPos));
		cursorPos += Text::DOT.width;
		break;
	case ',':
		input.push_back(std::make_pair(Text::KOMMA, cursorPos));
		cursorPos += Text::KOMMA.width;
		break;
	case '\'':
		input.push_back(std::make_pair(Text::SINGLE_QUOTE, cursorPos));
		cursorPos += Text::SINGLE_QUOTE.width;
		break;
	case '~':
		input.push_back(std::make_pair(Text::TILDE, cursorPos));
		cursorPos += Text::TILDE.width;
		break;
	case '0':
		input.push_back(std::make_pair(Text::ZERO, cursorPos));
		cursorPos += Text::ZERO.width;
		break;
	case '1':
		input.push_back(std::make_pair(Text::ONE, cursorPos));
		cursorPos += Text::ONE.width;
		break;
	case '2':
		input.push_back(std::make_pair(Text::TWO, cursorPos));
		cursorPos += Text::TWO.width;
		break;
	case '3':
		input.push_back(std::make_pair(Text::THREE, cursorPos));
		cursorPos += Text::THREE.width;
		break;
	case '4':
		input.push_back(std::make_pair(Text::FOUR, cursorPos));
		cursorPos += Text::FOUR.width;
		break;
	case '5':
		input.push_back(std::make_pair(Text::FIVE, cursorPos));
		cursorPos += Text::FIVE.width;
		break;
	case '6':
		input.push_back(std::make_pair(Text::SIX, cursorPos));
		cursorPos += Text::SIX.width;
		break;
	case '7':
		input.push_back(std::make_pair(Text::SEVEN, cursorPos));
		cursorPos += Text::SEVEN.width;
		break;
	case '8':
		input.push_back(std::make_pair(Text::EIGHT, cursorPos));
		cursorPos += Text::EIGHT.width;
		break;
	case '9':
		input.push_back(std::make_pair(Text::NINE, cursorPos));
		cursorPos += Text::NINE.width;
		break;
	default:
		break;												 
	}								 
}


