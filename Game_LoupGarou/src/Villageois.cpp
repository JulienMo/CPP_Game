#include <iostream>

#include "Villageois.hpp"

Villageois::Villageois() noexcept {}

Villageois::~Villageois() {}

void Villageois::voteToExpel() {
	std::cout << "voteToExpel()" << std::endl;
}

void Villageois::die() noexcept {
	this->_isDead = true;
	std::cout << this->getPseudo() << " die" << std::endl;
}

std::string Villageois::getRole() const noexcept {
	return "Villageois";
}


bool Villageois::getIsDead() const noexcept {
	return this->_isDead;
}

void Villageois::setIsDead(bool b) noexcept {
	this->_isDead = b;
}