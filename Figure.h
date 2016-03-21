//File: Figure.h
#ifdnef _Figure_H
#define _Figure_H

#include "Point.h"

class Figure {

public:
   Figure(double newx, double newy);
   double getX();
   double getY();
   void setX(double newx);
   void setY(double newy);
   void moveTo(double newx, double newy);
   void rMoveTo(double deltax, double deltay);
   virtual void draw();

private:
   double x;
   double y;
};

#endif _Figure_H