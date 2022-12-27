// 01-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	system("chcp 1251");
	system("cls");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// zd 1

	int x;
	cin >> x;
	int y;	
	cin >> y;

	double xd, yd, ymx;
	xd = x % 1;
	yd = y % 1;
	x = x / 1;
	y = y / 1;
	ymx = y - x;

	cout << x + y << "." << xd + yd;
	return 0;
}

