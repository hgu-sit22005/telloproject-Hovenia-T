#pragma once
#include "TelloPro.h"

class back: public TelloPro
{
public:
	back();
	back(int _value);
	
public:
	double get_delay();
};
