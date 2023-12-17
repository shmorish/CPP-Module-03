#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &src);
		~ScavTrap(void);

		void guardGate(void);
		void attack(std::string const &target);
	private:
		bool guardmode;
};

#endif