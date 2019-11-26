#pragma once
#include "TelloPro.h"

class down: public TelloPro
{
public:
	down();
	down(int _value);
	
public:
	double get_delay();
};
