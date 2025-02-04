#ifndef __VOYANTE__
#define __VOYANTE__

#include <string>

#include "Villageois.hpp"

class Voyante : public Villageois {

	using Villageois::Villageois;

	public :
		Voyante() noexcept;
		Voyante(Villageois* v) noexcept;
		~Voyante();

		void seePlayerRole() const noexcept;
		std::string getRole() const noexcept override;
};

#endif