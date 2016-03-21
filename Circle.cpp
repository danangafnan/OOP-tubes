#include "Figure.h"
#include "Circle.h"
#include "Ellipse.h"
#include <iostream>
using namespace std;
// constructor
Circle::Circle(double newx, double newy, double newradius): Figure(newx, newy) {
   setRadius(newradius);
}

// accessors for the radius
double Circle::getRadius() { return radius; }
void Circle::setRadius(double newradius) { radius = newradius; }

// draw the circle
void Circle::draw() {
  cout << "Drawing a Circle at:(" << getX() << "," << getY() <<
      "), radius " << getRadius() << endl;
}