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
	cout << "\n Welcome to Dungeon Crawler! \n To play use wasd to move along the grid \n " << endl;
	char grid[5][5] = { {'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'},
	{'1','2','3','4','5'} };
	char character = 'G';

	int position[2] = { 2,2 }; //mid

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
	cout << "\n\n Which way do you wish to move?: "; cin.get();

	char move;
	int up = 0;
	up = GetAsyncKeyState(VK_W);
	int left = 0;
	left = GetAsyncKeyState(VK_A);
	int right = 0;
	left = GetAsyncKeyState(VK_D);
	int back = 0;
	left = GetAsyncKeyState(VK_S);
	int down = 0;
	if (up) position[0] -= 1;
	else if (right) position[1] += 1;
	else if (down) position[0] += 1;
	else if (left) position[1] -= 1;

	if (up)
	{
		system("cls"); //clearrs screen and re creates
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == position[0] && j == position[1]) // + goes right - goes left											*/
					cout << character;
				else
					cout << grid[i][j];
				cout << " ";
			}
			cout << endl;
		}
		
	}
	else if (left) {
		system("cls"); //clearrs screen and re creates
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == position[0] && j == position[1]) // + goes right - goes left											*/
					cout << character;
				else
					cout << grid[i][j];
				cout << " ";
			}
			cout << endl;
		}
	}
	else if (right) {
		system("cls"); //clearrs screen and re creates
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == position[0] && j == position[1]) // + goes right - goes left											*/
					cout << character;
				else
					cout << grid[i][j];
				cout << " ";
			}
			cout << endl;
		}
	}
	else if (back) {
		system("cls"); //clearrs screen and re creates
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == position[0] && j == position[1]) // + goes right - goes left											*/
					cout << character;
				else
					cout << grid[i][j];
				cout << " ";
			}
			cout << endl;
		}
	}
}
