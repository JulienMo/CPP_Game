#include <iostream>

#include "LoupGarou.hpp"

LoupGarou::LoupGarou() noexcept {}

LoupGarou::LoupGarou(Villageois* v) noexcept : Villageois(v->getId(), v->getPseudo()) {}

LoupGarou::~LoupGarou() {}

void LoupGarou::voteToKill() {
	std::cout << "voteToKill()" << std::endl;
}

std::string LoupGarou::getRole() const noexcept {
	return "Loup-Garou";
}