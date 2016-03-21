#ifndef _ELLIPSE_H
#define _ELLIPSE_H

class Ellipse: public Figure {

public:
   Ellipse(double newx, double newy, double minorAxis, double majorAxis);
   double getMinorAxis();
   double getMajorAxis();
   void setMinorAxis(double newminoraxis);
   void setMajorAxis(double newmajoraxis);
   void draw();

private:
   double minorAxis,majorAxis;
};

#endif _ELLIPSE_H