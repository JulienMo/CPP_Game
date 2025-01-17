#ifndef __GAME__
#define __GAME__

#include <list>

#include "Player.hpp"

class Game {
	private :
		std::list<Player> _listPlayer;
		std::list<Player> _listVictim;
		int _dayCounter;
		bool _isNight;
	public :
		Game();
		~Game();

		std::list<Player> getListPlayer();
		std::list<Player> getListVictim();
		std::list<Player> getPlayerAlive();
		int getDayCounter();
		bool getIsNight();

		void addPlayer(Player p);
		void removePlayer(Player p);
		void addVictim(Player p);
		void removeVictim(Player p);
		void goToNextDay();

		void startGame();
		void startNextNight();
		void startNextDay();
		void attributeRole();
		bool checkWinnner();
};

#endif 