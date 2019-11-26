#pragma once
#include "TelloPro.h"

class cw: public TelloPro
{
public:
	cw();
	cw(int _value);
	
public:
	double get_delay();
};
