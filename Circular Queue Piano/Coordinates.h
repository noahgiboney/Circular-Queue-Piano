#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25

class Coordinates{
public:
	CHAR_INFO buffer[SCREEN_HEIGHT][SCREEN_WIDTH];
	HANDLE hOutput;
	void gotoxy(int x, int y)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		_COORD pos;
		pos.X = x;
		pos.Y = y;

		SetConsoleCursorPosition(hConsole, pos);
	}

	void ReadScreenShot();
	void RefreshArea(int x1, int y1, int x2, int y2);
};


