#ifndef __GAME__
#define __GAME__

#include <list>

#include "Villageois.hpp"
#include "Chasseur.hpp"
#include "Voyante.hpp"
#include "LoupGarou.hpp"
#include "Cupidon.hpp"
#include "Sorciere.hpp"

class Game {
	private :
		std::list<Villageois*> _listPlayer;
		std::list<Villageois*> _listVictim;
		int _dayCounter;
		bool _isNight;
	public :
		Game() noexcept;
		~Game();

		std::list<Villageois*> getListPlayer() const noexcept;
		std::list<Villageois*> getListVictim() const noexcept;
		std::list<Villageois*> getPlayerAlive() const noexcept;
		int getDayCounter() const noexcept;
		bool getIsNight() const noexcept;

		void addPlayer(Villageois* p);
		void removePlayer(Villageois* p);
		void addVictim(Villageois* p);
		void removeVictim(Villageois* p);
		void goToNextDay();

		void startGame();
		void startNextNight();
		void startNextDay();
		void attributeRole();
		bool checkWinnner() const noexcept;

		std::list<Villageois*> getVillageois();
		std::list<LoupGarou*> getLoupGarou();
		Chasseur* getChasseur();
		Voyante* getVoyante();
		Sorciere* getSorciere();
		Cupidon* getCupidon();
};

#endif 