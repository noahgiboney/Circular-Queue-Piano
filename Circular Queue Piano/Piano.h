#pragma once
#include <iostream>
#include <vector>
#include "CircleQueue.h"
#include "Coordinates.h"
using namespace std;


class Piano {
public:
	Coordinates move;
	void playNote(char note); // play note method
	const int NOTELENGTH = 300; // constant for note length
	const int NOTEPAUSE = 750; // constant for note pause
	void displayInterface(); // display interface method
};