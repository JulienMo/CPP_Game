#ifndef __CUPIDON__
#define __CUPIDON__

#include <string>

#include "Villageois.hpp"

class Cupidon : public Villageois {
	public : 
		void chooseLover();
		std::string getRole();
};

#endif