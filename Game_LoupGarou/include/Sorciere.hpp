#ifndef __SORCIERE__
#define __SORCIERE__

#include <string>

#include "Villageois.hpp"

class Sorciere : public Villageois {

	using Villageois::Villageois;

	public : 
		Sorciere() noexcept;
		Sorciere(Villageois* v) noexcept;
		~Sorciere();

		void seeVictim() const noexcept;
		void useKillPotion();
		void useSavePotion();
		std::string getRole() const noexcept override;
};

#endif