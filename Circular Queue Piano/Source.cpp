#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include "MyRectangle.h"
#include "Coordinates.h"
#include "Piano.h"
#include "PianoKeys.h"
#include "CircleQueue.h"
using namespace std;

//function that hides the cursor in the console
void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

int main() {

	char Command, Note; // char variables for command and notes

	Piano myPiano; // piano object
	CircleQueue myQueue; // Queue object
	myPiano.displayInterface(); // display the interface to the console

	ifstream myFile; 
	myFile.open("notes.txt"); // open file containing notes

	int increment = 3; // counter 
	int deleteIncrement = 3; // counter

	while (myFile >> Command) { //read command from file, command tells what piano to do 

		if (Command == 'A') { // A for add to queue

			myFile >> Note; //read what notes to play

			if (!myQueue.isFull()) { 

				myQueue.push(Note); //if queue is not full full, push notes to queue

				if (increment == 13) { // check if counter has reached end of queue
					increment = 3; // if so then initiailze to begining 
				}
				Sleep(1000); // pause for visual reason

				increment++; // increase counter 

				MyRectangle Notes(increment * 15, 52, 5, 3, char(219), false, 13, 15, Note); // rectangle constructor 
				Notes.Draw(); // draw note rectangle in the array
			}
		}
		else if (Command == 'P') { // P for pop, note will be played when popped

			deleteIncrement++; // increase dec counter

			if (!myQueue.isEmpty()) { //first check if queue is full

				if (deleteIncrement == 14) { // next check if dec counter has reached end of queue 
					deleteIncrement = 4;  // if so then initiailze to begining 
				}

				myQueue.pop(); // pop the first element that was pushed into the queue 
				Sleep(300); 

				myPiano.playNote(myQueue.element); // play the note that was just popped

				MyRectangle Notes(deleteIncrement * 15, 52, 5, 3, char(219), false, 13, 15, myQueue.element); //rectangle constructor
				Notes.Impolode(); // re-draw a new rectangle then implode the note that was popped
				Sleep(300); 
			}
		}
	}

	myFile.close(); //close file

	while (1); // infinite loop so exit message does not appear at the bottom 

	return EXIT_SUCCESS; // return exit success
}