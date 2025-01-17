#include <iostream>

#include "Sorciere.hpp"

void Sorciere::seeVictim() {
	std::cout << "seeVictim()" << std::endl;
}

void Sorciere::useKillPotion() {
	std::cout << "useKillPotion()" << std::endl;
}

void Sorciere::useSavePotion() {
	std::cout << "useSavePotion()" << std::endl;
}

std::string Sorciere::getRole() {
	return "Sorcière";
}