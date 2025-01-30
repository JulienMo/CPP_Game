#include <iostream>

#include "Chasseur.hpp"

Chasseur::Chasseur() noexcept {}

Chasseur::Chasseur(Villageois* v) noexcept : Villageois(v->getId(), v->getPseudo()) {}

Chasseur::~Chasseur() {}

void Chasseur::dieWithSomeone() {
	std::cout << "dieWithSomeone()" << std::endl;
}

std::string Chasseur::getRole() const noexcept {
	return "Chasseur";
}