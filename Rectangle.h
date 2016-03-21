//File: Rectangle.h
#ifndef _RECTANGLE_H
#define _RECTANGLE_H

class Rectangle: public Figure {

public:
   Rectangle(double newx, double newy, double newwidth, double newheight);
   double getWidth();
   double getHeight();
   void setWidth(double newwidth);
   void setHeight(double newheight);
   void draw();

private:
   double width;
   double height;
};

#endif _RECTANGLE_H