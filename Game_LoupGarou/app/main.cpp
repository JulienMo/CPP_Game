#include <iostream>

#include "Game.hpp"

#include "Chasseur.hpp"

int main(int argc, char* argv[]) {
	
	std::cout << "Hello World!" << std::endl;

	Game new_game{};

	Chasseur c1{};
	Chasseur c2{26, "tetetete"};

	std::cout << "Id : " << c1.getId() << ", Pseudo : " << c1.getPseudo() << ", Role : " << c1.getRole() << std::endl;
	std::cout << "Id : " << c2.getId() << ", Pseudo : " << c2.getPseudo() << ", Role : " << c2.getRole() << std::endl;

	return EXIT_SUCCESS;
}