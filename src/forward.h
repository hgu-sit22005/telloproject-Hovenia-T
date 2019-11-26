#pragma once
#include "TelloPro.h"

class forward: public TelloPro
{
public:
	forward();
	forward(int _value);
	
public:
	double get_delay();
};
