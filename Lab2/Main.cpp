#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
	Figure f1;
	f1.print();
	cout << endl;

	Figure f2(10, 15);
	f2.print();
	cout << endl;

	Figure f3(10, 15, 2, 5);
	f3.print();
	cout << endl;

	f3.show();
	cout << "-------------------------------------------" << endl;

	Circle c;
	c.print();
	c.show();

	return 0;
}