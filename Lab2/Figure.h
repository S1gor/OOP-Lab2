#pragma once

class Figure
{
protected:
	int x, y;
	int color;
	float size;

public:
	Figure();
	Figure(int x, int y, int color = 1, float size = 1);
	~Figure();
	
	void Init();

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

	void print();
	virtual void show();
};



class Circle : public Figure
{
public:
	void show();
};



class Rectangle : public Figure
{
private:
	float w, h;

public:
	Rectangle(int x, int y, int w, int h, int color, float size);
	~Rectangle();

	int getW();
	int getH();

	void setSides(int w, int h);
	void setW(int w);
	void setH(int h);

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

	void show();
};