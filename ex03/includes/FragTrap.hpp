#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &src);
		~FragTrap(void);

		void highFivesGuys(void);

	protected:
		static const int _frag_hitPoints = 100;
		static const int _frag_energyPoints = 100;
		static const int _frag_attackDamage = 30;
};

#endif