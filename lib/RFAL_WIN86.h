#ifndef RFAL_H
#define RFAL_H

#include <windows.h>

LRESULT CALLBACK WinHandle(HWND hID, UINT msgCode, WPARAM fInfo, LPARAM sInfo);
int SetWinSet(HINSTANCE ProI, HINSTANCE WOld, LPSTR args, int show);
HWND RFALCreateWin(HINSTANCE ProI, char* title, int width, int height);

HWND RFALCreateBut(HINSTANCE ProI, HWND attach, char* text, int xpos, int ypos, int width, int height);

#endif