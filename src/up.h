#pragma once
#include "TelloPro.h"

class up: public TelloPro
{
public:
	up();
	up(int _value);
	
public:
	double get_delay();
};
