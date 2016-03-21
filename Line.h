#include "Point.h"
#ifndef _LINE_H
#define _LINE_H



class Line
{
public:
    Line();
    Line(Point P1, Point P2);
    double GetA();
    double GetB();
	
private:
    Point p1, p2;
    double A,B;
};

#endif _LINE_H 