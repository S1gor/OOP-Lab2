#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
	const int size = 3;
	Figure* figures[size] = {
		new Circle(100,100,0,10),
		new Rectangle(10,10,10,10,1),
		new Triangle(10,10,20,20,30,30,100),
	};

	for (int i = 0; i < size; i++)
		figures[i]->print();

	return 0;
}