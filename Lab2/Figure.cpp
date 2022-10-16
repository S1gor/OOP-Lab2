#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure(int x, int y, int color, float size)
{
	moveTo(x, y);
	setColor(color);
	setSize(size);
}

Figure::~Figure()
{}

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



Circle::Circle(int x, int y, int color, float size)
{
	this->x = x;
	this->y = y;
	this->color = color;
	this->size = size;
}

void Circle::print()
{
	cout << "Circle:\nx = " << x << "\ny = " << y << "\ncolor = " << color << "\nsize = " << size << endl;
}

void Circle::show()
{
	cout << "Circle" << endl;
}



Rectangle::Rectangle(int x, int y, int w, int h, int color)
{
	moveTo(x, y);
	setSides(w, h);
	setColor(color);
}

Rectangle::~Rectangle()
{}

int Rectangle::getW()
{
	return w;
}

int Rectangle::getH()
{
	return h;
}

void Rectangle::setSides(int w, int h)
{
	setW(w);
	setH(h);
}

void Rectangle::setW(int w)
{
	if (w > 0)	this->w = w;
}

void Rectangle::setH(int h)
{
	if (h > 0)	this->h = h;
}

void Rectangle::print()
{
	cout << "Rectangle:\nx = " << x << "\ny = " << y << "\nw = " << w << "\nh = " << h << "\ncolor = " << color << endl;
}

void Rectangle::show()
{
	cout << "Rectangle" << endl;
}



Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3, int color)
{
	moveTo(x1, y1, x2, y2, x3, y3);
	setColor(color);
}

Triangle::~Triangle()
{}

void Triangle::moveTo(int x1, int y1, int x2, int y2, int x3, int y3)
{
	this->x1 = x1;
	this->y1 = y1;

	this->x2 = x2;
	this->y2 = y2;
	
	this->x3 = x3;
	this->y3 = y3;
}

void Triangle::moveRel(int dx1, int dy1, int dx2, int dy2, int dx3, int dy3)
{
	this->x1 += dx1;
	this->y1 += dy1;

	this->x2 += dx2;
	this->y2 += dy2;

	this->x3 += dx3;
	this->y3 += dy3;
}

void Triangle::print()
{
	cout << "Triangle:\nx1 = " << x1 << "\ny1 = " << y1 << "\nx2 = " << x2 << "\ny2 = " << y2
		<< "\nx3 = " << x3 << "\ny3 = " << y3 << "\ncolor = " << color << endl;
}

void Triangle::show()
{
	cout << "Triangle" << endl;
}