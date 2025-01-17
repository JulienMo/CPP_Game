#ifndef __CHASSEUR__
#define __CHASSEUR__

#include <string>

#include "Villageois.hpp"

class Chasseur : public Villageois {
	public :
		void dieWithSomeone();
		std::string getRole() const;
};

#endif