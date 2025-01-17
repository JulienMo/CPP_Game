#ifndef __VOYANTE__
#define __VOYANTE__

#include <string>

#include "Villageois.hpp"

class Voyante : public Villageois {
	public :
		void seePlayerRole();
		std::string getRole();
};

#endif