#include <iostream>
#include <list>

#include "Game.hpp"

Game::Game() {
	this->attributeRole();
	this->startGame();
}

Game::~Game() {
	delete this;
}

std::list<Player> Game::getListPlayer() {
	return this->_listPlayer;
}

std::list<Player> Game::getListVictim() {
	return this->_listVictim;
}

std::list<Player> Game::getPlayerAlive() {
	std::list<Player> listPlayerAlive{this->getListPlayer()};
	for (Player victim : _listVictim) {
		listPlayerAlive.remove(victim);
	}
	return listPlayerAlive;
}

int Game::getDayCounter() {
	return this->_dayCounter;
}

bool Game::getIsNight() {
	return this->_isNight;
}

void Game::addPlayer(Player p) {
	this->_listPlayer.push_back(p);
}

void Game::removePlayer(Player p) {
	this->_listPlayer.remove(p);
}

void Game::addVictim(Player p) {
	this->_listVictim.push_back(p);
}

void Game::removeVictim(Player p) {
	this->_listVictim.remove(p);
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

bool Game::checkWinnner() {
	std::cout << "checkWinner()" << std::endl;
	return true;
}