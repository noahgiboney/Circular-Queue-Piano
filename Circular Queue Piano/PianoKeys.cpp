#include "PianoKeys.h"

//method defintion for drawing keys
void PianoKeys::ColorBackGround_A(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 58; j <= 65; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_S(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {

		for (int j = 79; j <= 88; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_D(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 93; j <= 102; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_F(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 115; j <= 119; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_G(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 132; j <= 135; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_H(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 150; j <= 155; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_J(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 161; j <= 170; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_K(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 35; i++) {
		for (int j = 183; j <= 190; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_W(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 20; i++) {


		for (int j = 70; j <= 75; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_E(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 20; i++) {
		for (int j = 105; j <= 110; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_T(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 20; i++) {
		for (int j = 123; j <= 128; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_Y(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 20; i++) {
		for (int j = 141; j <= 146; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}
void PianoKeys::ColorBackGround_U(int color) {

	SetConsoleTextAttribute(hConsole, color);

	for (int i = 8; i <= 20; i++) {
		for (int j = 173; j <= 179; j++) {
			move.gotoxy(j, i);
			cout << char(219);
		}
	}
}