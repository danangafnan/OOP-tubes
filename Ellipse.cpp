#include "Figure.h"
#include "Ellipse.h"
#include <iostream.h>

Ellipse::Ellipse(double newx, double newy, double minorAxis, majorAxis): Figure(newx, newy) {
   setMinorAxis(minorAxis);
   setMajorAxis(majorAxis);
}

double Ellipse::getMinorAxis() { return minorAxis; }
double Ellipse::getMajoraxis() { return majorAxis; }
void Ellipse::setMinorAxis(double newminoraxis) { radius = newminoraxis; }
void Ellipse::setmajoraxis(double newmajoraxis) { radius = newmajoraxis; }

// draw the Ellipse
void Ellipse::draw() {
  cout << "Drawing a Ellipse at:(" << getX() << "," << getY() <<
      "), Minor Axis " << getMinorAxis() << ", Major Axis " << getMajoraxis() << endl;
}