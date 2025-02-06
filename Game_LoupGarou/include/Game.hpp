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
		Game(int nbPlayer);
		~Game();

		std::list<Villageois*> getListPlayer() const noexcept;
		std::list<Villageois*> getListVictim() const noexcept;
		std::list<Villageois*> getPlayerAlive() const noexcept;
		int getDayCounter() const noexcept;
		bool getIsNight() const noexcept;

		void setIsNight(bool b) noexcept;

		void addPlayer(Villageois* p);
		void removePlayer(Villageois* p);
		Villageois* getPlayer(int place) const noexcept;
		bool changeRolePlayer(Villageois* v, Villageois* newRole) noexcept;
		void printListPlayer() const noexcept;
		void printListVillageois() const noexcept;
		void addVictim(Villageois* v);
		void removeVictim(Villageois* v);
		void goToNextDay();
		void createListePlayer(int nbPlayer);

		void startGame();
		void startNextNight();
		void startNextDay();
		void attributeRole();
		bool checkWinnner() const noexcept;

		std::list<Villageois*> getVillageois() const noexcept;
		std::list<LoupGarou*> getLoupGarou() const noexcept;
		Chasseur* getChasseur() const noexcept;
		Voyante* getVoyante() const noexcept;
		Sorciere* getSorciere() const noexcept;
		Cupidon* getCupidon() const noexcept;
};

#endif 