#pragma once

class Figure
{
protected:
	int x, y;
	int color;
	float size;

public:
	Figure(int x = 0, int y = 0, int color = 0, float size = 0);
	~Figure();

	int getX();
	int getY();
	int getColor();
	float getSize();

	void moveTo(int x, int y);
	void moveRel(int dx, int dy);

	void setX(int x);
	void setY(int y);
	void setColor(int color);
	void setSize(float size);

	virtual void print() = 0;
	virtual void show() = 0;
};



class Circle : public Figure
{
public:
	Circle(int x, int y, int color, float size);
	~Circle();

	void print();
	void show();
};



class Rect : public Figure
{
private:
	int w, h;

public:
	Rect(int x, int y, int w, int h, int color);
	~Rect();

	int getW();
	int getH();

	void setSides(int w, int h);
	void setW(int w);
	void setH(int h);

	void print();
	void show();
};



class Triangle : public Figure
{
private:
	int x1, y1, x2, y2, x3, y3;

public:
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3, int color);
	~Triangle();

	void moveTo(int x1, int y1, int x2, int y2, int x3, int y3);
	void moveRel(int dx1, int dy1, int dx2, int dy2, int dx3, int dy3);

	void print();
	void show();
};