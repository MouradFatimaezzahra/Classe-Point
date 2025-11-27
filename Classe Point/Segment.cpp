#include "Segment.h"
using namespace geom;

Segment::Segment(Point* P1, Point* P2, string id) : start(P1), end(P2), id(id) //initialiser liste pour id obliger car il est const
{
	cout << "call for Segment constructor" << endl;
	this->lenght = this->start->distance(*this->end);
}


void Segment::afficher() const
{
	cout << "segment [" << this->id << ",";
	this->start->afficher();
	cout << ",";
	this->end->afficher();
	cout << "]" << endl;
}

Segment::~Segment()
{
	cout << "call for Segment destructor" << endl;
}

