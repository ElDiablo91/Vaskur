#pragma once
#include "Surface.h"
#include <list>
#include <map>

class Font
{
public:
	class Character
	{
	public:
		int bitmapPos;
		char charValue;
		int intValue;
		int width;
		int leftPadding;
		int rightPadding;
	};
public:
	Font();
	~Font();

	std::list<Character> StringToTextList(std::string s);
public:
	std::map<char, Font::Character> charMap;
	Surface *fontBitmap = new Surface("Font_bookman_old_style.bmp");

	constexpr static Character START			{ 0,			'\0',	 0,		0 ,		0,	1};
	constexpr static Character SPACE			{ 0,			' ',	 0,		5 ,		0,	0};
	constexpr static Character EXCLAMATION		{ 23 + 6,		'!',	 0,		9 ,		0,	0};
	constexpr static Character DOUBLE_QUOTE		{ 46 + 8,		'"',	 0,		7 ,		0,	0};
	constexpr static Character POUND_SIGN		{ 69 + 5,		'#',	 0,		14,		0,	0};
	constexpr static Character DOLLAR_SIGN		{ 92 + 6,		'$',	 0,		14,		0,	0};
	constexpr static Character PERCENT			{ 115 + 2,		'%',	 0,		21,		0,	0};
	constexpr static Character AMPERSAND		{ 138 + 3,		'&',	 0,		17,		0,	0};
	constexpr static Character FORWARD_SLASH	{ 161 + 7,		'/',	 0,		10,		0,	0};
	constexpr static Character LEFT_BRACKET		{ 184 + 8,		'(',	 0,		6 ,		0,	0};
	constexpr static Character RIGHT_BRACKET	{ 207 + 10,		')',	 0,		6 ,		0,	0};
	constexpr static Character L_SQUERE_BRACKET	{ 230 + 9,		'[',	 0,		6 ,		0,	0};
	constexpr static Character R_SQUERE_BRACKET { 253 + 9,		']',	 0,		6 ,		0,	0};
	constexpr static Character L_CURLY_BRACKET  { 276 + 7,		'{',	 0,		8 ,		0,	0};
	constexpr static Character R_CURLY_BRACKET  { 299 + 9,		'}',	 0,		8 ,		0,	0};
	constexpr static Character EQUALS_SIGN		{ 322 + 7,		'=',	 0,		11,		0,	0};
	constexpr static Character UNDERSCORE		{ 345 + 6,		'_',	 0,		13,		0,	0};
	constexpr static Character BACK_SLASH		{ 368 + 7,		'\\',	 0,		10,		0,	0};
	constexpr static Character LESS_THEN		{ 391 + 6,		'<',	 0,		11,		0,	0};
	constexpr static Character GREATER_THEN		{ 414 + 7,		'>',	 0,		12,		0,	0};
	constexpr static Character PLUS_SIGN		{ 437 + 7,		'+',	 0,		11,		0,	0};
	constexpr static Character DASH				{ 460 + 6,		'-',	 0,		9 ,		0,	0};
	constexpr static Character ATT				{ 483 + 2,		'@',	 0,		19,		0,	0};
	constexpr static Character QUESTION_MARK	{ 506 + 6,		'?',	 0,		12,		0,	0};
	constexpr static Character COLON			{ 529 + 9,		':',	 0,		5 ,		0,	0};
	constexpr static Character SEMI_COLON		{ 552 + 9,		';',	 0,		6 ,		0,	0};
	constexpr static Character DOT				{ 575 + 9,		'.',	 0,		5 ,		0,	0};
	constexpr static Character KOMMA			{ 598 + 8,		',',	 0,		6 ,		0,	0};
	constexpr static Character a				{ 621 + 5,		'a',	 0,		12,		0,	0};
	constexpr static Character b				{ 644 + 6,		'b',	 0,		13,		0,	0};
	constexpr static Character c				{ 667 + 5,		'c',	 0,		12,		0,	0};
	constexpr static Character d				{ 690 + 4,		'd',	 0,		14,		0,	0};
	constexpr static Character e				{ 713 + 5,		'e',	 0,		12,		0,	0};
	constexpr static Character f				{ 736 + 7,		'f',	 0,		10,		0,	-2};
	constexpr static Character g				{ 759 + 6,		'g',	 0,		12,		0,	0};
	constexpr static Character h				{ 782 + 5,		'h',	 0,		15,		0,	0};
	constexpr static Character i				{ 805 + 8,		'i',	 0,		7 ,		0,	0};
	constexpr static Character j				{ 828 + 7,		'j',	 0,		9 ,		-2,	0};
	constexpr static Character k				{ 851 + 5,		'k',	 0,		14,		0,	0};
	constexpr static Character l				{ 874 + 9,		'l',	 0,		8 ,		0,	0};
	constexpr static Character m				{ 897 + 2,		'm',	 0,		20,		0,	0};
	constexpr static Character n				{ 920 + 5,		'n',	 0,		15,		0,	0};
	constexpr static Character o				{ 943 + 7,		'o',	 0,		12,		0,	0};
	constexpr static Character p				{ 966 + 6,		'p',	 0,		13,		0,	0};
	constexpr static Character q				{ 989 + 5,		'q',	 0,		14,		0,	0};
	constexpr static Character r				{ 1012 + 7,		'r',	 0,		10,		0,	0};
	constexpr static Character s				{ 1035 + 7,		's',	 0,		11,		0,	0};
	constexpr static Character t				{ 1058 + 7,		't',	 0,		9 ,		0,	0};
	constexpr static Character u				{ 1081 + 3,		'u',	 0,		16,		0,	0};
	constexpr static Character v				{ 1104 + 5,		'v',	 0,		14,		0,	0};
	constexpr static Character w				{ 1127 + 3,		'w',	 0,		18,		0,	0};
	constexpr static Character x				{ 1150 + 6,		'x',	 0,		13,		0,	0};
	constexpr static Character y				{ 1173 + 6,		'y',	 0,		14,		0,	0};
	constexpr static Character z				{ 1196 + 6,		'z',	 0,		11,		0,	0};
	constexpr static Character SINGLE_QUOTE		{ 1219 + 10,	'\'',	 0,		4 ,		0,	0};
	constexpr static Character A				{ 1242 + 4,		'A',	 0,		15,		0,	0};
	constexpr static Character B				{ 1265 + 4,		'B',	 0,		16,		0,	0};
	constexpr static Character C				{ 1288 + 4,		'C',	 0,		16,		0,	0};
	constexpr static Character D				{ 1311 + 4,		'D',	 0,		16,		0,	0};
	constexpr static Character E				{ 1334 + 5,		'E',	 0,		15,		0,	0};
	constexpr static Character F				{ 1357 + 5,		'F',	 0,		14,		0,	0};
	constexpr static Character G				{ 1380 + 3,		'G',	 0,		17,		0,	0};
	constexpr static Character H				{ 1403 + 4,		'H',	 0,		16,		0,	0};
	constexpr static Character I				{ 1426 + 8,		'I',	 0,		8 ,		0,	0};
	constexpr static Character J				{ 1449 + 5,		'J',	 0,		14,		0,	0};
	constexpr static Character K				{ 1472 + 5,		'K',	 0,		15,		0,	0};
	constexpr static Character L				{ 1495 + 6,		'L',	 0,		13,		0,	0};
	constexpr static Character M				{ 1518 + 3,		'M',	 0,		19,		0,	0};
	constexpr static Character N				{ 1541 + 5,		'N',	 0,		16,		0,	0};
	constexpr static Character O				{ 1564 + 4,		'O',	 0,		17,		0,	0};
	constexpr static Character P				{ 1587 + 5,		'P',	 0,		14,		0,	0};
	constexpr static Character Q				{ 1610 + 4,		'Q',	 0,		17,		0,	0};
	constexpr static Character R				{ 1633 + 4,		'R',	 0,		16,		0,	0};
	constexpr static Character S				{ 1656 + 6,		'S',	 0,		14,		0,	0};
	constexpr static Character T				{ 1679 + 4,		'T',	 0,		16,		0,	0};
	constexpr static Character U				{ 1702 + 4,		'U',	 0,		17,		0,	0};
	constexpr static Character V				{ 1725 + 4,		'V',	 0,		16,		0,	0};
	constexpr static Character W				{ 1748 + 1,		'W',	 0,		21,		0,	0};
	constexpr static Character X				{ 1771 + 5,		'X',	 0,		16,		0,	0};
	constexpr static Character Y				{ 1794 + 5,		'Y',	 0,		15,		0,	0};
	constexpr static Character Z				{ 1817 + 5,		'Z',	 0,		14,		0,	0};
	constexpr static Character TILDE			{ 1840 + 7,		'~',	 0,		11,		0,	0};
	constexpr static Character á				{ 1863 + 5,		'á',	 0,		14,		0,	-1};
	constexpr static Character ð				{ 1886 + 5,		'ð',	 0,		12,		0,	0};
	constexpr static Character é				{ 1909 + 5,		'é',	 0,		12,		0,	0};
	constexpr static Character í				{ 1932 + 7,		'í',	 0,		8 ,		0,	0};
	constexpr static Character ó				{ 1955 + 5,		'ó',	 0,		12,		0,	0};
	constexpr static Character ú				{ 1978 + 4,		'ú',	 0,		16,		0,	0};
	constexpr static Character ý				{ 2001 + 5,		'ý',	 0,		14,		0,	0};
	constexpr static Character þ				{ 2024 + 5,		'þ',	 0,		13,		0,	0};
	constexpr static Character æ				{ 2047 + 3,		'æ',	 0,		18,		0,	0};
	constexpr static Character ö				{ 2070 + 6,		'ö',	 0,		12,		0,	0};
	constexpr static Character Á				{ 2093 + 3,		'Á',	 0,		16,		0,	0};
	constexpr static Character Ð				{ 2116 + 4,		'Ð',	 0,		16,		0,	0};
	constexpr static Character É				{ 2139 + 4,		'É',	 0,		15,		0,	0};
	constexpr static Character Í				{ 2162 + 8,		'Í',	 0,		8 ,		0,	0};
	constexpr static Character Ó				{ 2185 + 4,		'Ó',	 0,		16,		0,	0};
	constexpr static Character Ú				{ 2208 + 3,		'Ú',	 0,		17,		0,	0};
	constexpr static Character Ý				{ 2231 + 4,		'Ý',	 0,		15,		0,	0};
	constexpr static Character Þ				{ 2254 + 5,		'Þ',	 0,		14,		0,	0};
	constexpr static Character Æ				{ 2277 + 0,		'Æ',	 0,		24,		0,	0};
	constexpr static Character Ö				{ 2300 + 3,		'Ö',	 0,		16,		0,	0};
	constexpr static Character ZERO				{ 2484 + 5,		'0',	 0,		13,		0,	0};
	constexpr static Character ONE				{ 2507 + 7,		'1',	 1,		10,		0,	0};
	constexpr static Character TWO				{ 2530 + 5,		'2',	 2,		13,		0,	0};
	constexpr static Character THREE			{ 2553 + 5,		'3',	 3,		13,		0,	0};
	constexpr static Character FOUR				{ 2576 + 5,		'4',	 4,		13,		0,	0};
	constexpr static Character FIVE				{ 2599 + 6,		'5',	 5,		12,		0,	0};
	constexpr static Character SIX				{ 2622 + 5,		'6',	 6,		13,		0,	0};
	constexpr static Character SEVEN			{ 2645 + 6,		'7',	 7,		12,		0,	0};
	constexpr static Character EIGHT			{ 2668 + 5,		'8',	 8,		14,		0,	0};
	constexpr static Character NINE				{ 2691 + 5,		'9',	 9,		13,		0,	0};
};		

		
		
		
		
		
		
		
		
		
		