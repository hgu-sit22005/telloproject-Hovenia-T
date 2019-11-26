#include "back.h"
#include <cstring>
#include <sstream>

back::back()
{ 
	command = new char[strlen("back 20")+1];
	strcpy(command, "back 20");
}

back::back(int _value)
{
	std::stringstream sstream;
	sstream << "back " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double back::get_delay()
{ 
	return 2; 
}