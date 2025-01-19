#include <iostream>

#include "Villageois.hpp"

Villageois::Villageois() noexcept {}

Villageois::~Villageois() {}

void Villageois::voteToExpel() {
	std::cout << "voteToExpel()" << std::endl;
}

void Villageois::die() {
	std::cout << "die()" << std::endl;
}

std::string Villageois::getRole() const noexcept {
	return "Villageois";
}