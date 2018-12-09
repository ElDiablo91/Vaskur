#include "Font.h"

Font::Font()
{
	charMap['\0'] = START;
	charMap[' ' ] = SPACE;
	charMap['!' ] = EXCLAMATION;
	charMap['"' ] = DOUBLE_QUOTE;
	charMap['#' ] = POUND_SIGN;
	charMap['$' ] = DOLLAR_SIGN;
	charMap['%' ] = PERCENT;
	charMap['&' ] = AMPERSAND;
	charMap['/' ] = FORWARD_SLASH;
	charMap['(' ] = LEFT_BRACKET;
	charMap[')' ] = RIGHT_BRACKET;
	charMap['[' ] = L_SQUERE_BRACKET;
	charMap[']' ] = R_SQUERE_BRACKET;
	charMap['{' ] = L_CURLY_BRACKET;
	charMap['}' ] = R_CURLY_BRACKET;
	charMap['=' ] = EQUALS_SIGN;
	charMap['_' ] = UNDERSCORE;
	charMap['\\'] = BACK_SLASH;
	charMap['<' ] = LESS_THEN;
	charMap['>' ] = GREATER_THEN;
	charMap['+' ] = PLUS_SIGN;
	charMap['-' ] = DASH;
	charMap['@' ] = ATT;
	charMap['?' ] = QUESTION_MARK;
	charMap[':' ] = COLON;
	charMap[';' ] = SEMI_COLON;
	charMap['.' ] = DOT;
	charMap[',' ] = KOMMA;
	charMap['a' ] = a;
	charMap['b' ] = b;
	charMap['c' ] = c;
	charMap['d' ] = d;
	charMap['e' ] = e;
	charMap['f' ] = f;
	charMap['g' ] = g;
	charMap['h' ] = h;
	charMap['i' ] = i;
	charMap['j' ] = j;
	charMap['k' ] = k;
	charMap['l' ] = l;
	charMap['m' ] = m;
	charMap['n' ] = n;
	charMap['o' ] = o;
	charMap['p' ] = p;
	charMap['q' ] = q;
	charMap['r' ] = r;
	charMap['s' ] = s;
	charMap['t' ] = t;
	charMap['u' ] = u;
	charMap['v' ] = v;
	charMap['w' ] = w;
	charMap['x' ] = x;
	charMap['y' ] = y;
	charMap['z' ] = z;
	charMap['\''] = SINGLE_QUOTE;
	charMap['A' ] = A;
	charMap['B' ] = B;
	charMap['C' ] = C;
	charMap['D' ] = D;
	charMap['E' ] = E;
	charMap['F' ] = F;
	charMap['G' ] = G;
	charMap['H' ] = H;
	charMap['I' ] = I;
	charMap['J' ] = J;
	charMap['K' ] = K;
	charMap['L' ] = L;
	charMap['M' ] = M;
	charMap['N' ] = N;
	charMap['O' ] = O;
	charMap['P' ] = P;
	charMap['Q' ] = Q;
	charMap['R' ] = R;
	charMap['S' ] = S;
	charMap['T' ] = T;
	charMap['U' ] = U;
	charMap['V' ] = V;
	charMap['W' ] = W;
	charMap['X' ] = X;
	charMap['Y' ] = Y;
	charMap['Z' ] = Z;
	charMap['~' ] = TILDE;
	charMap['á' ] = á;
	charMap['ð' ] = ð;
	charMap['é' ] = é;
	charMap['í' ] = í;
	charMap['ó' ] = ó;
	charMap['ú' ] = ú;
	charMap['ý' ] = ý;
	charMap['þ' ] = þ;
	charMap['æ' ] = æ;
	charMap['ö' ] = ö;
	charMap['Á' ] = Á;
	charMap['Ð' ] = Ð;
	charMap['É' ] = É;
	charMap['Í' ] = Í;
	charMap['Ó' ] = Ó;
	charMap['Ú' ] = Ú;
	charMap['Ý' ] = Ý;
	charMap['Þ' ] = Þ;
	charMap['Æ' ] = Æ;
	charMap['Ö' ] = Ö;
	charMap['0' ] = ZERO;
	charMap['1' ] = ONE;
	charMap['2' ] = TWO;
	charMap['3' ] = THREE;
	charMap['4' ] = FOUR;
	charMap['5' ] = FIVE;
	charMap['6' ] = SIX;
	charMap['7' ] = SEVEN;
	charMap['8' ] = EIGHT;
	charMap['9' ] = NINE;
}

Font::~Font()
{
}

std::list<Font::Character> Font::StringToTextList(std::string s)
{
	std::list<Font::Character> temp;
	temp.push_back(charMap['\0']);
	for (int i = 0; i < s.size(); i++)
	{
		temp.push_back(charMap[s[i]]);
	}
	return temp;
}
