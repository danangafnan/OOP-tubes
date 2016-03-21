#ifndef POINT_H
#define POINT_H

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

#endif // POINT_H 