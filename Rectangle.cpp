
#include "Figure.h"
#include "Rectangle.h"
#include <iostream.h>

// constructor
Rectangle::Rectangle(double newx, double newy, double newwidth, double newheight): Figure(newx, newy) {
   setWidth(newwidth);
   setHeight(newheight);
}

// accessors for width and height
double Rectangle::getWidth() { return width; }
double Rectangle::getHeight() { return height; }
void Rectangle::setWidth(double newwidth) { width = newwidth; }
void Rectangle::setHeight(double newheight) { height = newheight; }

// draw the rectangle
void Rectangle::draw() {
   cout << "Drawing a Rectangle at:(" << getX() << "," << getY() <<
      "), width " << getWidth() << ", height " << getHeight() << endl;
}