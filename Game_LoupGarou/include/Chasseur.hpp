#ifndef __CHASSEUR__
#define __CHASSEUR__

#include <string>

#include "Villageois.hpp"

class Chasseur : public Villageois {

	using Villageois::Villageois;

	public :
		Chasseur() noexcept;
		Chasseur(Villageois* v) noexcept;
		~Chasseur();

		void dieWithSomeone();
		std::string getRole() const noexcept override;
};

#endif