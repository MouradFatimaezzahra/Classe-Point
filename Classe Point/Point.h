#pragma once
class Point
{
private:
	float X;
	float Y;
public:
	Point(float X, float Y);
	float distance(Point P1);
	void afficher();
};

