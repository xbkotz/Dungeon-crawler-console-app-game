#include "pch.h"
#include <string>
#include <iostream>
#include <windows.h>
#define VK_W 0x57
#define VK_A 0x41
#define VK_S 0x53
#define VK_D 0x44

using namespace::std;
int main(int argc, char * argv[])
{
	char grid[5][5] = { {'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'} };
	char character = 'G';

	int position[2] = { 2,2 };

	// Create the grid once
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
	}

	// Wait for input
	cout << "\n\nHit enter."; cin.get();
	char move;
	int up = 0;
	up = GetAsyncKeyState(VK_W);
	if (up)
	{
		system("cls");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == position[0] && j == position[1]-1)
					cout << character;
				else
					cout << grid[i][j];
				cout << " ";
			}
			cout << endl;
		}
	}

}
