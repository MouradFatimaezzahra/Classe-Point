#include "Point.h"
using namespace std;
#include <iostream>
#include <math.h>

Point::Point(float X, float Y){
	this->X = X;
	this->Y = Y;
}

float Point::distance(Point P1)
{
	return sqrt(pow(P1.X - this->X,2)+ pow(P1.Y - this->Y,2));
}

void Point::afficher()
{
	cout << "(" << this->X << "," << this->Y << ")" << endl;
}
