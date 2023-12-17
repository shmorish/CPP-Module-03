#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &src);
		~DiamondTrap(void);

		void whoAmI(void);
		void attack(std::string const &target); // <-- new scavtrap attack

	private:
		std::string _name;
};

#endif