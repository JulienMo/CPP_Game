#ifndef __CUPIDON__
#define __CUPIDON__

#include <string>

#include "Villageois.hpp"

class Cupidon : public Villageois {

	using Villageois::Villageois;

	public : 
		Cupidon() noexcept;
		Cupidon(Villageois* v) noexcept;
		~Cupidon();

		void chooseLover();
		std::string getRole() const noexcept override;
};

#endif