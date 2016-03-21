#include "Point.h"
#include <iostream>

using namespace std;
              //INITIALIZES
Point::Point():x(0), y(0)
{
   
}

Point::Point(double _x, double _y)
{
    x = _x;
    y = _y;
}

void Point::SetX(double newx)
{
    x = newx;
}
void Point::SetY(double newy)
{
    y = newy;
}

double Point::GetX()
{
    return x;
}
double Point::GetY()
{
    return y;
}