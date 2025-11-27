#include "Point.h"
using namespace geom;  // organisation vertuelle  ou bien   geom::Point....
#include <iostream>
#include<string>

Point::Point(float X, float Y ,string id): id(id) ,X(X),Y(Y){
}

float Point::distance(Point P1)
{
	return sqrt(pow(P1.X - this->X,2)+ pow(P1.Y - this->Y,2));
}

void Point::afficher()
{
	cout << this->id<<"(" << this->X << "," << this->Y << ")" ;
}

Point::~Point()
{
	cout << "call Point destructor" << endl;
}

/*Point::Point(const Point& P):id(P.id)
{
	this->X =P. X;
	this->Y = P.Y;
}*/
