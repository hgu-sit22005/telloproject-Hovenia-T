#include "cw.h"
#include <cstring>
#include <sstream>

cw::cw()
{ 
	command = new char[strlen("cw 20")+1];
	strcpy(command, "cw 20");
}

cw::cw(int _value)
{
	std::stringstream sstream;
	sstream << "cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double cw::get_delay()
{ 
	return 2; 
}