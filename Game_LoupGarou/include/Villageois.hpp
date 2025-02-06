#ifndef __VILLAGEOIS__
#define __VILLAGEOIS__

#include <string>

#include "Player.hpp"

class Villageois : public Player {

	using Player::Player;
	
	public :
		Villageois() noexcept;
		~Villageois();

		void voteToExpel();
		virtual void die() noexcept;
		virtual std::string getRole() const noexcept;
		bool getIsDead() const noexcept;
		void setIsDead(bool b) noexcept;
	private :
		bool _isDead;
		bool _isMayor;
		Player vote;
		Player _idLover;
		int deathTurn;
};

#endif 