#include "RFAL_WIN86.h"

int SetWinSet(HINSTANCE ProI, HINSTANCE WOld, LPSTR args, int show) {
	WNDCLASS winClass = {0};
	winClass.lpfnWndProc = WinHandle;
	winClass.hInstance = ProI;
	winClass.lpszClassName = "RFAL Window";
	winClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	
	return RegisterClass(&winClass);
}

HWND RFALCreateWin(HINSTANCE ProI, char* title, int width, int height) {
	HWND mainWin = CreateWindow(
		"RFAL Window",
		title,
		WS_OVERLAPPEDWINDOW,
		150, 150,
		width, height,
		NULL, NULL,
		ProI,
		NULL
	);
	
	return mainWin;
}

HWND RFALCreateBut(HINSTANCE ProI, HWND attach, char* text, int xpos, int ypos, int width, int height) {
	HWND subWin = CreateWindow(
		"BUTTON",
		"Click me!",
		WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
		75, 75, 100, 50,
		attach, NULL,
		ProI, NULL
	);
	
	return subWin;
}