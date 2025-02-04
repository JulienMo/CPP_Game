#include <iostream>

#include "Cupidon.hpp"

Cupidon::Cupidon() noexcept {}

Cupidon::Cupidon(Villageois* v) noexcept : Villageois(v->getId(), v->getPseudo()) {}

Cupidon::~Cupidon() {}

void Cupidon::chooseLover() {
	std::cout << "chooseLover()" << std::endl;
}

std::string Cupidon::getRole() const noexcept {
	return "Cupidon";
}