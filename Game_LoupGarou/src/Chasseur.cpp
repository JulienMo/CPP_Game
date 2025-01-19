#include <iostream>

#include "Chasseur.hpp"

Chasseur::Chasseur() noexcept {}

Chasseur::~Chasseur() {}

void Chasseur::dieWithSomeone() {
	std::cout << "dieWithSomeone()" << std::endl;
}

std::string Chasseur::getRole() const noexcept {
	return "Chasseur";
}