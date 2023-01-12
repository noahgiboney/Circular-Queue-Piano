#pragma once
#include <iostream>
#include "MyRectangle.h"
#include "Coordinates.h"
using namespace std;

class PianoKeys{ 
public:
	
	Coordinates move; //cordinates object

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //set console color

	//methods to draw each key on the piano
	void ColorBackGround_A(int color);
	void ColorBackGround_S(int color);
	void ColorBackGround_D(int color);
	void ColorBackGround_F(int color);
	void ColorBackGround_G(int color);
	void ColorBackGround_H(int color);
	void ColorBackGround_J(int color);
	void ColorBackGround_K(int color);
	void ColorBackGround_W(int color);
	void ColorBackGround_E(int color);
	void ColorBackGround_T(int color);
	void ColorBackGround_Y(int color);
	void ColorBackGround_U(int color);

};

