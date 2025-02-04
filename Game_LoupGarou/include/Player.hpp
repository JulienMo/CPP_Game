#ifndef __PLAYER__
#define __PLAYER__

#include <string>

class Player {
	public :
		Player() noexcept;
		Player(int id, std::string pseudo) noexcept;
		virtual ~Player();

		int getId() const noexcept;
		std::string getPseudo() const noexcept;
		void setPseudo(std::string pseudo);

		bool operator==(Player& other) const noexcept;
	private :
		int _id;
		std::string _pseudo;
};

#endif