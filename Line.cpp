#include "line.h"
#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

//Default constructor
Line::Line():A(0),B(0)
{

}
Line::Line(Point P1, Point P2)
{
    p1 = P1;
    p2 = P2;
    double x1,x2,y1,y2;
    x1 = P1.GetX();
    x2 = P2.GetX();
    y1 = P1.GetY();
    y2 = P2.GetY();

    //derived from slope(m) intercept(b) form
    double m,b;
    m = (y2 - y1)/(x2-x1);
    b = y1 - ((y2-y1))/(x2-x1)*x1;

    B = -1/b;
    A = -B*m;
}

//ACCESSORS
double Line::GetA()
{
    return A;
}
double Line::GetB()
{
    return B;
}


