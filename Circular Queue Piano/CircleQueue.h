#pragma once
#include <iostream>
#include <string>
#include "MyRectangle.h"
#include "Coordinates.h"
#include "Piano.h"
#include "CircleQueue.h"
using namespace std;

#define SIZE 10 // max size of queue (10 but 11 to account for index 0)

class CircleQueue {
private: 
	char array[SIZE]; //char array to hold elements
	int front; //index for front of array
	int back; //index for back of array

public: 
	char element; // element member which will index the queue 
	CircleQueue() { front = back = -1; } // constructor to set value of front and back to -1 
	void push(char element); // push method
	char pop(); // pop method
	bool isFull(); // check if queue is full
	bool isEmpty(); // check if queue is empty
};