#pragma once
#include"Point.h"
#include <string>
#include<iostream>
namespace geom {
	class Segment
	{
	private:
		Point* start;
	    Point* end;
	    const string id;
	    double lenght;
    public:
		Segment(Point *P1, Point *P2, string id);
		void afficher() const ;
		~Segment();
	};
}
