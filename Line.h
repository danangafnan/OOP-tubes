#ifndef LINE_H
#define LINE_H

#include "Point.h"

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

#endif // LINE_H 