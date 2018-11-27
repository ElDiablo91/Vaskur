#pragma once
#include <string>
#include "Surface.h"

class Text
{
public:
	Text(const std::string filename);
	~Text();

	Surface *fontBitmap;
public:
	class Character
	{
	public:
		int bitmapPos;
		char charValue;
		int intValue;
		int width;
	};
	constexpr static Character SPACE			{ 0,		' ',	 0,		5 };
	constexpr static Character EXCLAMATION		{ 23 + 6,		'!',	 0,		9 };
	constexpr static Character DOUBLE_QUOTE		{ 46 + 8,		'"',	 0,		7 };
	constexpr static Character POUND_SIGN		{ 69 + 5,		'#',	 0,		14 };
	constexpr static Character DOLLAR_SIGN		{ 92 + 6,		'$',	 0,		14 };
	constexpr static Character PERCENT			{ 115 + 2,		'%',	 0,		21 };
	constexpr static Character AMPERSAND		{ 138 + 3,		'&',	 0,		17 };
	constexpr static Character FORWARD_SLASH	{ 161 + 7,		'/',	 0,		10 };
	constexpr static Character LEFT_BRACKET		{ 184 + 8,		'(',	 0,		6 };
	constexpr static Character RIGHT_BRACKET	{ 207 + 10,		')',	 0,		6 };
	constexpr static Character L_SQUERE_BRACKET	{ 230 + 6,		'[',	 0,		5 };
	constexpr static Character R_SQUERE_BRACKET { 253 + 6,		']',	 0,		5 };
	constexpr static Character L_CURLY_BRACKET  { 276 + 6,		'{',	 0,		5 };
	constexpr static Character R_CURLY_BRACKET  { 299 + 6,		'}',	 0,		5 };
	constexpr static Character EQUALS_SIGN		{ 322 + 6,		'=',	 0,		8 };
	constexpr static Character UNDERSCORE		{ 345 + 6,		'_',	 0,		8 };
	constexpr static Character BACK_SLASH		{ 368 + 6,		'\\',	 0,		5 };
	constexpr static Character LESS_THEN		{ 391 + 6,		'<',	 0,		8 };
	constexpr static Character GREATER_THEN		{ 414 + 6,		'>',	 0,		8 };
	constexpr static Character PLUS_SIGN		{ 437 + 6,		'+',	 0,		8 };
	constexpr static Character DASH				{ 460 + 6,		'-',	 0,		8 };
	constexpr static Character ATT				{ 483 + 6,		'@',	 0,		10 };
	constexpr static Character QUESTION_MARK	{ 506 + 6,		'?',	 0,		8 };
	constexpr static Character COLON			{ 529 + 6,		':',	 0,		5 };
	constexpr static Character SEMI_COLON		{ 552 + 6,		';',	 0,		5 };
	constexpr static Character DOT				{ 575 + 6,		'.',	 0,		5 };
	constexpr static Character KOMMA			{ 598 + 6,		',',	 0,		5 };
	constexpr static Character a				{ 621+3,		'a',	 0,		12 };
	constexpr static Character b				{ 644,		'b',	 0,		10 };
	constexpr static Character c				{ 667,		'c',	 0,		10 };
	constexpr static Character d				{ 690,		'd',	 0,		10 };
	constexpr static Character e				{ 713,		'e',	 0,		10 };
	constexpr static Character f				{ 736,		'f',	 0,		10 };
	constexpr static Character g				{ 759,		'g',	 0,		10 };
	constexpr static Character h				{ 782,		'h',	 0,		10 };
	constexpr static Character i				{ 805,		'i',	 0,		10 };
	constexpr static Character j				{ 828,		'j',	 0,		10 };
	constexpr static Character k				{ 851,		'k',	 0,		10 };
	constexpr static Character l				{ 874,		'l',	 0,		10 };
	constexpr static Character m				{ 897,		'm',	 0,		10 };
	constexpr static Character n				{ 920,		'n',	 0,		10 };
	constexpr static Character o				{ 943,		'o',	 0,		10 };
	constexpr static Character p				{ 966,		'p',	 0,		10 };
	constexpr static Character q				{ 989,		'q',	 0,		10 };
	constexpr static Character r				{ 1012,		'r',	 0,		10 };
	constexpr static Character s				{ 1035,		's',	 0,		10 };
	constexpr static Character t				{ 1058,		't',	 0,		10 };
	constexpr static Character u				{ 1081,		'u',	 0,		10 };
	constexpr static Character v				{ 1104,		'v',	 0,		10 };
	constexpr static Character w				{ 1127,		'w',	 0,		10 };
	constexpr static Character x				{ 1150,		'x',	 0,		10 };
	constexpr static Character y				{ 1173,		'y',	 0,		10 };
	constexpr static Character z				{ 1196,		'z',	 0,		10 };
	constexpr static Character SINGLE_QUOTE		{ 1219,		'\'',	 0,		10 };
	constexpr static Character A				{ 1242,		'A',	 0,		10 };
	constexpr static Character B				{ 1265,		'B',	 0,		10 };
	constexpr static Character C				{ 1288,		'C',	 0,		10 };
	constexpr static Character D				{ 1311,		'D',	 0,		10 };
	constexpr static Character E				{ 1334,		'E',	 0,		10 };
	constexpr static Character F				{ 1357,		'F',	 0,		10 };
	constexpr static Character G				{ 1380,		'G',	 0,		10 };
	constexpr static Character H				{ 1403,		'H',	 0,		10 };
	constexpr static Character I				{ 1426,		'I',	 0,		10 };
	constexpr static Character J				{ 1449,		'J',	 0,		10 };
	constexpr static Character K				{ 1472,		'K',	 0,		10 };
	constexpr static Character L				{ 1495,		'L',	 0,		10 };
	constexpr static Character M				{ 1518,		'M',	 0,		10 };
	constexpr static Character N				{ 1541,		'N',	 0,		10 };
	constexpr static Character O				{ 1564,		'O',	 0,		10 };
	constexpr static Character P				{ 1587,		'P',	 0,		10 };
	constexpr static Character Q				{ 1610,		'Q',	 0,		10 };
	constexpr static Character R				{ 1633,		'R',	 0,		10 };
	constexpr static Character S				{ 1656,		'S',	 0,		10 };
	constexpr static Character T				{ 1679,		'T',	 0,		10 };
	constexpr static Character U				{ 1702,		'U',	 0,		10 };
	constexpr static Character V				{ 1725,		'V',	 0,		10 };
	constexpr static Character W				{ 1748,		'W',	 0,		10 };
	constexpr static Character X				{ 1771,		'X',	 0,		10 };
	constexpr static Character Y				{ 1794,		'Y',	 0,		10 };
	constexpr static Character Z				{ 1817,		'Z',	 0,		10 };
	constexpr static Character TILDE			{ 1840,		'~',	 0,		10 };
	constexpr static Character á				{ 1863,		'á',	 0,		10 };
	constexpr static Character ð				{ 1886,		'ð',	 0,		10 };
	constexpr static Character é				{ 1909,		'é',	 0,		10 };
	constexpr static Character í				{ 1932,		'í',	 0,		10 };
	constexpr static Character ó				{ 1955,		'ó',	 0,		10 };
	constexpr static Character ú				{ 1978,		'ú',	 0,		10 };
	constexpr static Character ý				{ 2001,		'ý',	 0,		10 };
	constexpr static Character þ				{ 2024,		'þ',	 0,		10 };
	constexpr static Character æ				{ 2047,		'æ',	 0,		10 };
	constexpr static Character ö				{ 2070,		'ö',	 0,		10 };
	constexpr static Character Á				{ 2093,		'Á',	 0,		10 };
	constexpr static Character Ð				{ 2116,		'Ð',	 0,		10 };
	constexpr static Character É				{ 2139,		'É',	 0,		10 };
	constexpr static Character Í				{ 2162,		'Í',	 0,		10 };
	constexpr static Character Ó				{ 2185,		'Ó',	 0,		10 };
	constexpr static Character Ú				{ 2208,		'Ú',	 0,		10 };
	constexpr static Character Ý				{ 2231,		'Ý',	 0,		10 };
	constexpr static Character Þ				{ 2254,		'Þ',	 0,		10 };
	constexpr static Character Ö				{ 2277,		'Ö',	 0,		10 };
	constexpr static Character Æ				{ 2300,		'Æ',	 0,		10 };
	constexpr static Character ZERO				{ 2484,		'0',	 0,		10 };
	constexpr static Character ONE				{ 2507,		'1',	 1,		10 };
	constexpr static Character TWO				{ 2530,		'2',	 2,		10 };
	constexpr static Character THREE			{ 2553,		'3',	 3,		10 };
	constexpr static Character FOUR				{ 2576,		'4',	 4,		10 };
	constexpr static Character FIVE				{ 2599,		'5',	 5,		10 };
	constexpr static Character SIX				{ 2622,		'6',	 6,		10 };
	constexpr static Character SEVEN			{ 2645,		'7',	 7,		10 };
	constexpr static Character EIGHT			{ 2668,		'8',	 8,		10 };
	constexpr static Character NINE				{ 2691,		'9',	 9,		10 };
};		


		
		
		
		
		
		
		
		
		
		