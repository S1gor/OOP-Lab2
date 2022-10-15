#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure()
{
	Init();
}

Figure::Figure(int x, int y, int color, float size)
{
	Init();
	moveTo(x, y);
	setColor(color);
	setSize(size);
}

Figure::~Figure()
{}

void Figure::Init()
{
	x = y = 1;
	size = 1;
	color = 1;
}

int Figure::getX()
{
	return x;
}

int Figure::getY()
{
	return y;
}

int Figure::getColor()
{
	return color;
}

float Figure::getSize()
{
	return size;
}

void Figure::moveTo(int x, int y)
{
	setX(x);
	setY(y);
}

void Figure::moveRel(int dx, int dy)
{
	setX(dx + x);
	setY(dy + y);
}

void Figure::setX(int x)
{
	if (x > 0)	this->x = x;
}

void Figure::setY(int y)
{
	if (y > 0)	this->y = y;
}

void Figure::setColor(int color)
{
	if (color > 0)	this->color = color;
}

void Figure::setSize(float size)
{
	if (size > 0)	this->size = size;
}

void Figure::print()
{
	cout << "x = " << getX() << "\ny = " << getY() << "\ncolor = " << getColor() << "\nsize = " << getSize() << endl;
}

void Figure::show()
{
	cout << "Figure" << endl;
}