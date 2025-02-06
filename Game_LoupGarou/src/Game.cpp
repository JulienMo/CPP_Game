#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#include "Game.hpp" 
#include "Villageois.hpp"
#include "Chasseur.hpp"
#include "Voyante.hpp"

std::list<Villageois*> default_list_Villageois{new Villageois, new Villageois(2, "two"), new Villageois(3, "three"), new Villageois(4, "four"), new Villageois(5, "five"), new Villageois(6, "six")};
std::list<Villageois*> default_list_Villageois2{new Villageois, new Chasseur(2, "test"), new Villageois(3, "three"), new Voyante(4, "four"), new Villageois(5, "five"), new Villageois(6, "six")};

Game::Game() noexcept : _listPlayer(default_list_Villageois), _dayCounter(0), _isNight(false) {
	createListePlayer(6);
	this->attributeRole();
	this->startGame();
}

Game::Game(int nbPlayer) : _listPlayer({}), _dayCounter(0), _isNight(false) {
	createListePlayer(nbPlayer);
	this->attributeRole();
	this->startGame();
}

Game::~Game() {}

std::list<Villageois*> Game::getListPlayer() const noexcept {
	return _listPlayer;
}

Villageois* Game::getPlayer(int place) const noexcept {
	auto it = this->_listPlayer.begin();
	std::advance(it, place);
	return *it;
}

bool Game::changeRolePlayer(Villageois* v, Villageois* newRole) noexcept {
	if (typeid(*v) == typeid(Villageois)) {	
		std::replace(this->_listPlayer.begin(), this->_listPlayer.end(), v, newRole);
		return true;
	}
	return false;
}

std::list<Villageois*> Game::getListVictim() const noexcept {
	return this->_listVictim;
}

std::list<Villageois*> Game::getPlayerAlive() const noexcept {
	std::list<Villageois*> listPlayerAlive{this->_listPlayer};
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

void Game::addPlayer(Villageois* p) {
	std::cout << "addVillageois()" << std::endl;
	this->_listPlayer.push_back(p);
}

void Game::removePlayer(Villageois* p) {
	this->_listPlayer.remove(p);
}

void Game::printListPlayer() const noexcept {
	std::cout << "----------------------- printListPlayer ---------------------------------" << std::endl;
	for (Villageois* v : this->_listPlayer) {
		std::cout << "Id : " << v->getId() << ", Pseudo : " << v->getPseudo() << ", Role : " << v->getRole() << std::endl;
	}
}

void Game::printListVillageois() const noexcept {
	std::cout << "----------------------- printListVillageois ---------------------------------" << std::endl;
	for (Villageois* v : this->getVillageois()) {
		std::cout << "Id : " << v->getId() << ", Pseudo : " << v->getPseudo() << ", Role : " << v->getRole() << std::endl;
	}
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
	startNextNight();
}

void Game::startNextNight() {

	// TODO 
	std::cout << "startNextNight()" << std::endl;
}

void Game::startNextDay() {
	std::cout << "startNextDay()" << std::endl;
}

void Game::attributeRole() {
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	std::cout << "attributeRole()" << std::endl;

	std::srand(std::time(nullptr)); // use current time as seed for random generator

	int random_value{0};
	Villageois* selectPlayer{};

    do {
		random_value = std::rand() % this->getVillageois().size();
		std::cout << "random_value : " << random_value << std::endl;
		selectPlayer = this->getPlayer(random_value);
		std::cout << "Chasseur :\t- ID : " << selectPlayer->getId() << std::endl;
	} while (!this->changeRolePlayer(selectPlayer, new Chasseur(selectPlayer)));

	do {
		random_value = std::rand() % this->getVillageois().size();
		std::cout << "random_value : " << random_value << std::endl;
		selectPlayer = this->getPlayer(random_value);
		std::cout << "Voyante :\t- ID : " << selectPlayer->getId() << std::endl;
	} while (!this->changeRolePlayer(selectPlayer, new Voyante(selectPlayer)));

	this->printListPlayer();
}

void Game::createListePlayer(int nbPlayer) {
	for (int i{0}; i < nbPlayer; i++) {
		this->_listPlayer.push_back(new Villageois(i, "Player_" + std::to_string(i)));
	}
}

bool Game::checkWinnner() const noexcept {
	std::cout << "checkWinner()" << std::endl;
	return true;
}

void Game::setIsNight(bool b) noexcept {
	this->_isNight = b;
}

Chasseur* Game::getChasseur() const noexcept {
	for (Villageois* v : this->_listPlayer) {
		if (dynamic_cast<Chasseur*>(v)) {
			return dynamic_cast<Chasseur*>(v);
		}
	}
	return nullptr;
}

Voyante* Game::getVoyante() const noexcept {
	for (Villageois* v : this->_listPlayer) {
		if (dynamic_cast<Voyante*>(v)) {
			return dynamic_cast<Voyante*>(v);
		}
	}
	return nullptr;
}

Cupidon* Game::getCupidon() const noexcept {
	for (Villageois* v : this->_listPlayer) {
		if (dynamic_cast<Cupidon*>(v)) {
			return dynamic_cast<Cupidon*>(v);
		}
	}
	return nullptr;
}

Sorciere* Game::getSorciere() const noexcept {
	for (Villageois* v : this->_listPlayer) {
		if (dynamic_cast<Sorciere*>(v)) {
			return dynamic_cast<Sorciere*>(v);
		}
	}
	return nullptr;
}

std::list<Villageois*> Game::getVillageois() const noexcept {
	std::list<Villageois*> listVillageois;
	for (Villageois* v : this->_listPlayer) {

		if (typeid(*v) == typeid(Villageois)) {		// Couldn't ue dynamic cast, because all the object are cast at least as a Villageois 
			listVillageois.push_back(dynamic_cast<Villageois*>(v));
		}
	}
	return listVillageois;
}

std::list<LoupGarou*> Game::getLoupGarou() const noexcept {
	std::list<LoupGarou*> listLoupGarou;
	for (Villageois* v : this->_listPlayer) {
		if (dynamic_cast<LoupGarou*>(v)) {
			listLoupGarou.push_back(dynamic_cast<LoupGarou*>(v));
		}
	}
	return listLoupGarou;
}
