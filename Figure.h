//File: Figure.h
#include "Point.h"

#ifndef _FIGURE_H
#define _FIGURE_H


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

#endif _FIGURE_H