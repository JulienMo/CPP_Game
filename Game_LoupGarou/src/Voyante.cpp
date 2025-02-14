#include <iostream>

#include "Voyante.hpp"

Voyante::Voyante() noexcept {}

Voyante::Voyante(Villageois* v) noexcept : Villageois(v->getId(), v->getPseudo()) {}

Voyante::~Voyante() noexcept {}

void Voyante::seePlayerRole() const noexcept {
	std::cout << "seePlayerRole()" << std::endl;
}

std::string Voyante::getRole() const noexcept {
	return "Voyante";
}