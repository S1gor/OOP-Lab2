#include <iostream>
#include "Figure.h"
#include "graphics.h"
#pragma comment(lib,"graphics.lib")

using namespace std;

int main()
{
	initwindow(700, 500, "Figures", 500, 250);

	const int size = 4;
	Figure* figures[size] = {
		new Circle(320,250,0xFF8000,100),
		new Rect(100,100,75,200,0xFF8000),
		new Triangle(600,50,600,450,400,100,0xFF8000),
		new Star(35,135,50,50,65,135,20,90,80,90,0xFF8000)
	};

	for (int i = 0; i < size; i++)
		figures[i]->print();

	while (true)
	{
		int choice = getch() - '1';
		cleardevice();

		for (int i = 0; i < size; i++)
			if (choice == i || choice == size)
				figures[i]->show();
	}

	return 0;
}