#include <iostream>
#include "Figure.h"
#include "graphics.h"
#pragma comment(lib,"graphics.lib")

using namespace std;

int main()
{
	initwindow(700, 500, "Figures", 500, 250);

	const int size = 2;
	Figure* figures[size] = {
		new Circle(320,250,0xFF8000,100),
		new Rect(100,100,75,200,0xFF8000),
		//new Triangle(10,10,20,20,30,30,100),
	};

	//for (int i = 0; i < size; i++)
		//figures[i]->print();

	while (true)
	{
		for (int i = 0; i < size; i++)
			figures[i]->show();
	}

	return 0;
}