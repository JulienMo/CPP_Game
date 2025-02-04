#include <iostream>

#include "Sorciere.hpp"

Sorciere::Sorciere() noexcept {}

Sorciere::Sorciere(Villageois* v) noexcept : Villageois(v->getId(), v->getPseudo()) {}

Sorciere::~Sorciere() {}

void Sorciere::seeVictim() const noexcept {
	std::cout << "seeVictim()" << std::endl;
}

void Sorciere::useKillPotion() {
	std::cout << "useKillPotion()" << std::endl;
}

void Sorciere::useSavePotion() {
	std::cout << "useSavePotion()" << std::endl;
}

std::string Sorciere::getRole() const noexcept {
	return "Sorcière";
}