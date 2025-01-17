#ifndef __SORCIERE__
#define __SORCIERE__

#include <string>

#include "Villageois.hpp"

class Sorciere : public Villageois {
	public : 
		void seeVictim();
		void useKillPotion();
		void useSavePotion();
		std::string getRole();
};

#endif