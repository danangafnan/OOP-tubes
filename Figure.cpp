#include "Figure.h"
#include "Point.h"
// constructor
Figure::Figure(double newx, double newy) {
   moveTo(newx, newy);
}

// accessors for x & y
double Figure::getX() { return x; }
double Figure::getY() { return y; }
void Figure::setX(double newx) { x = newx; }
void Figure::setY(double newy) { y = newy; }

// move the Figure position
void Figure::moveTo(double newx, double newy) {
   setX(newx);
   setY(newy);
}
void Figure::rMoveTo(double deltax, double deltay) {
   moveTo(getX() + deltax, getY() + deltay);
}

// abstract draw method
void Figure::draw() {
}