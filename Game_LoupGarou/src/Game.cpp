#include <iostream>
#include <list>

#include "Game.hpp" 
#include "Villageois.hpp"
#include "Chasseur.hpp"
#include "Voyante.hpp"

std::list<Villageois*> default_list_Villageois{new Villageois, new Chasseur(2, "test"), new Villageois(3, "three"), new Voyante(4, "four"), new Villageois(5, "five"), new Villageois(6, "six")};

Game::Game() noexcept : _listPlayer(default_list_Villageois) {
	for (Villageois* v : default_list_Villageois) {
		std::cout << "Id : " << v->getId() << ", Pseudo : " << v->getPseudo() << ", Role : " << v->getRole() << std::endl;
	}

	std::cout << "\n\n\n" << std::endl;

	Chasseur* chasseur{getChasseur()};
	chasseur->dieWithSomeone();

	Voyante* voyante{getVoyante()};
	voyante->seePlayerRole();

	std::list<Villageois*> listeVillageois{getVillageois()};
	for (Villageois* v : listeVillageois) {
		std::cout << v->getRole() << std::endl;
	}
}

Chasseur* Game::getChasseur() {
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<Chasseur*>(v)) {
			return dynamic_cast<Chasseur*>(v);
		}
	}
	return nullptr;
}

Voyante* Game::getVoyante() {
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<Voyante*>(v)) {
			return dynamic_cast<Voyante*>(v);
		}
	}
	return nullptr;
}

Cupidon* Game::getCupidon() {
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<Cupidon*>(v)) {
			return dynamic_cast<Cupidon*>(v);
		}
	}
	return nullptr;
}

Sorciere* Game::getSorciere() {
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<Sorciere*>(v)) {
			return dynamic_cast<Sorciere*>(v);
		}
	}
	return nullptr;
}

std::list<Villageois*> Game::getVillageois() {
	std::list<Villageois*> listVillageois;
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<Villageois*>(v)) {
			listVillageois.push_back(dynamic_cast<Villageois*>(v));
		}
	}
	return listVillageois;
}

std::list<LoupGarou*> Game::getLoupGarou() {
	std::list<LoupGarou*> listLoupGarou;
	for (Villageois* v : this->getListPlayer()) {
		if (dynamic_cast<LoupGarou*>(v)) {
			listLoupGarou.push_back(dynamic_cast<LoupGarou*>(v));
		}
	}
	return listLoupGarou;
}

Game::~Game() {}

std::list<Villageois*> Game::getListPlayer() const noexcept {
	return this->_listPlayer;
}

std::list<Villageois*> Game::getListVictim() const noexcept {
	return this->_listVictim;
}

std::list<Villageois*> Game::getPlayerAlive() const noexcept {
	std::list<Villageois*> listPlayerAlive{this->getListPlayer()};
	for (Villageois* victim : _listVictim) {
		listPlayerAlive.remove(victim);
	}
	return listPlayerAlive;
}

int Game::getDayCounter() const noexcept {
	return this->_dayCounter;
}

bool Game::getIsNight() const noexcept {
	return this->_isNight;
}

void Game::addPlayer(Villageois* v) {
	std::cout << "addVillageois()" << std::endl;
	this->_listPlayer.push_back(v);
	std::cout << "addVillageois()" << std::endl;
}

void Game::removePlayer(Villageois* v) {
	this->_listPlayer.remove(v);
}

void Game::addVictim(Villageois* v) {
	this->_listVictim.push_back(v);
}

void Game::removeVictim(Villageois* v) {
	this->_listVictim.remove(v);
}

void Game::goToNextDay() {
	this->_dayCounter++;
}

void Game::startGame() {
	std::cout << "startGame()" << std::endl;
}

void Game::startNextNight() {
	std::cout << "startNextNight()" << std::endl;
}

void Game::startNextDay() {
	std::cout << "startNextDay()" << std::endl;
}

void Game::attributeRole() {
	std::cout << "attributeRole()" << std::endl;
}

bool Game::checkWinnner() const noexcept {
	std::cout << "checkWinner()" << std::endl;
	return true;
}