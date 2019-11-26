#include "forward.h"
#include <cstring>
#include <sstream>

forward::forward()
{ 
	command = new char[strlen("forward 20")+1];
	strcpy(command, "forward 20");
}

forward::forward(int _value)
{
	std::stringstream sstream;
	sstream << "forward " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double forward::get_delay()
{ 
	return 2; 
}