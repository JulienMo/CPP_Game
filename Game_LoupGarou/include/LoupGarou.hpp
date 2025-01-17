#ifndef __LOUP_GAROU__
#define __LOUP_GAROU__

#include <string>

#include "Villageois.hpp"

class LoupGarou : public Villageois {
	public :
		void voteToKill();
		std::string getRole();
};

#endif