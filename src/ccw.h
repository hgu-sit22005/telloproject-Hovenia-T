#pragma once
#include "TelloPro.h"

class ccw: public TelloPro
{
public:
	ccw();
	ccw(int _value);
	
public:
	double get_delay();
};
