#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
    Point();
    Point(double _x, double _y);

    double GetX();
    double GetY();

    void SetX(double newx);
    void SetY(double newy);
	
private:
    double x;
	double y;
};

#endif _POINT_H 