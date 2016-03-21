#ifndef _CIRCLE_H
#define _CIRCLE_H

class Circle: public Ellipse {

public:
   Circle(double newx, double newy, double newradius);
   double getRadius();
   void setRadius(double newradius);
   void draw();

private:
   double radius;
};

#endif _CIRCLE_H