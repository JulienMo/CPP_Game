#ifndef __VILLAGEOIS__
#define __VILLAGEOIS__

#include <string>

#include "Player.hpp"

class Villageois : public Player {
	public :
		void voteToExpel();
		void die();
		virtual std::string getRole();
};

#endif 