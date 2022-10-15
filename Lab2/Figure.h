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
	void show();
};