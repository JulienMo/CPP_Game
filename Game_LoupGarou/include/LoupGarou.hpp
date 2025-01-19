#ifndef __LOUP_GAROU__
#define __LOUP_GAROU__

#include <string>

#include "Villageois.hpp"

class LoupGarou : public Villageois {

	using Villageois::Villageois;

	public :
		LoupGarou() noexcept;
		~LoupGarou();

		void voteToKill();
		std::string getRole() const noexcept override;
};

#endif