//File: Creation.h
#ifndef _CREATION_H
#define _CREATION_H

#include "Figure.h"
#include "Point.h"

class Creation{
	public:
		//ctor-dtor
		Creation();
		~Creation();
		
	private:
		Figure figure;
		Point position;
		enum strength({
			weak,
			medium,
			heavy
		};
		enum direction{
			north,
			northeast,
			east,
			southeast,
			south,
			soutwest,
			west,
			northwest
		};
}

#endif _CREATION_H