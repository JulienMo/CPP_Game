#ifndef __PLAYER__
#define __PLAYER__

#include <string>

class Player {
	public :
		Player();
		~Player();

		int getId();
		std::string getPseudo();

		bool operator==(Player& other) const;
	private :
		int _id;
		std::string _pseudo;
};

#endif