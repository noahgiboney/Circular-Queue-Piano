#pragma once
#include "Coordinates.h"

class MyRectangle : public Coordinates
{
public:
	int m_x, m_y, m_w, m_h;
	char m_symbol;
	bool m_hollow;
	int m_recColor, m_textColor;
	HANDLE hConsole;
	char m_text;
	int m_sleepTime;

	MyRectangle();
	MyRectangle(int xx, int yy, int ww, int hh, char cc, bool hol = false, int recCol = 15, int txtCol = 15, char text = ' ', int sleepTime = 250);
	void Draw();
	void SetX(int xx);
	void SetY(int yy);
	void setWidth(int ww);
	void setHeight(int hh);
	void setSymbol(char cc);
	void setHollow(bool h);
	void setRectangleColor(int colr);
	void setTextColor(int colr);
	void setText(char txt);
	void DrawPath(string path);
	void setSleepTime(int s);
	void EraseBox();
	void Impolode();
};
