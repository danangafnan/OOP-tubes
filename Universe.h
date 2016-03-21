//File: Universe.h
#ifndef _UNIVERSE_H
#define _UNIVERSE_H

#include "Figure.h"
#include "Creation.h"

class Universe{
	public:
		//ctor-dtor
		Universe();
		~Universe();
		
		void SetArea(int _length, int _width);
		void addCreation(Creation _creature);
		
		Rectangle getArea();
		Creation getCreation(); //ini list ya?
		
	private:
		Rectangle area;
		Creation *creature;
}

#endif _UNIVERSE_H