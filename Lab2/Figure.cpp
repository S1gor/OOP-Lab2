#include <iostream>
#include "Figure.h"
#include "graphics.h"

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

Circle::~Circle()
{}

void Circle::print()
{
	cout << "Circle:\nx = " << x << "\ny = " << y << "\ncolor = " << color << "\nsize = " << size << endl << endl;
}

void Circle::show()
{
	setcolor(color);
	circle(x, y, size);
}



Rect::Rect(int x, int y, int w, int h, int color)
{
	moveTo(x, y);
	setSides(w, h);
	setColor(color);
}

Rect::~Rect()
{}

int Rect::getW()
{
	return w;
}

int Rect::getH()
{
	return h;
}

void Rect::setSides(int w, int h)
{
	setW(w);
	setH(h);
}

void Rect::setW(int w)
{
	if (w > 0)	this->w = w;
}

void Rect::setH(int h)
{
	if (h > 0)	this->h = h;
}

void Rect::print()
{
	cout << "Rectangle:\nx = " << x << "\ny = " << y << "\nw = " << w << "\nh = " << h << "\ncolor = " << color << endl << endl;
}

void Rect::show()
{
	setcolor(color);
	rectangle(x, y, x + w, y + h);
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

void Triangle::print()
{
	cout << "Triangle:\nx1 = " << x1 << "\ny1 = " << y1 << "\nx2 = " << x2 << "\ny2 = " << y2
		<< "\nx3 = " << x3 << "\ny3 = " << y3 << "\ncolor = " << color << endl << endl;
}

void Triangle::show()
{
	int poly[8];

	poly[0] = x1;
	poly[1] = y1;

	poly[2] = x2;
	poly[3] = y2;
	
	poly[4] = x3;
	poly[5] = y3;
	
	poly[6] = poly[0];
	poly[7] = poly[1];

	drawpoly(4, poly);

	setcolor(color);
	setfillpattern((char*)poly, color);
	fillpoly(4, poly);
}



Star::Star(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int color)
{
	moveTo(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
	setColor(color);
}

Star::~Star()
{}

void Star::moveTo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5)
{
	this->x1 = x1;
	this->y1 = y1;

	this->x2 = x2;
	this->y2 = y2;

	this->x3 = x3;
	this->y3 = y3;

	this->x4 = x4;
	this->y4 = y4;

	this->x5 = x5;
	this->y5 = y5;
}

void Star::print()
{
	cout << "Star:\nx1 = " << x1 << "\ny1 = " << y1 << "\nx2 = " << x2 << "\ny2 = " << y2 << "\nx3 = " << x3 << "\ny3 = " << y3
		<< "\nx4 = " << x4 << "\ny4 = " << y4 << "\nx5 = " << x5 << "\ny5 = " << y5 << "\ncolor = " << color << endl << endl;
}

void Star::show()
{
	int poly[12];

	poly[0] = x1;
	poly[1] = y1;

	poly[2] = x2;
	poly[3] = y2;

	poly[4] = x3;
	poly[5] = y3;

	poly[6] = x4;
	poly[7] = y4;

	poly[8] = x5;
	poly[9] = y5;

	poly[10] = poly[0];
	poly[11] = poly[1];

	drawpoly(6, poly);
}