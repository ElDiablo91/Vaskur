#pragma once
#include "TextBox.h"

class ComboBox : public TextBox
{
public:
	ComboBox();
	ComboBox(int x, int y, int width, int height);
	~ComboBox();
	
	void Input(MainWindow& wnd) override;
	void Draw(Graphics& gfx) override;
	void CheckForCursor(int x, int y) override;
	void AddToList(std::list<Font::Character> l);

private:
	void Search();		//Leita eftir staf og raða í dropDownList
	bool IsEqual(std::list<Font::Character> l);
private:
	int arrowDownX;
	int arrowDownY;
	int arrowDownWidth;
	int arrowDownHeight;
	bool isDropDown;
	std::list<std::list<Font::Character>> dropDownList;
	std::list<std::list<Font::Character>> searchList;
};
