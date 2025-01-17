#include <iostream>

#include "Villageois.hpp"

void Villageois::voteToExpel() {
	std::cout << "voteToExpel()" << std::endl;
}

void Villageois::die() {
	std::cout << "die()" << std::endl;
}

std::string Villageois::getRole() {
	return "Villageois";
}