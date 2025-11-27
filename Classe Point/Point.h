#pragma once
#include<iostream>
#include <string>
using namespace std;
namespace geom{
	class Point
{
private:
	float X;
	float Y;
	const string id;
public:
	Point(float X, float Y , string);
	float distance(Point P1);
	void afficher();
	//Point(const Point& P);
	~Point();
};
}
