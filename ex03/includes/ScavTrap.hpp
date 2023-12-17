#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &src);
		~ScavTrap(void);

		void guardGate(void);

	protected:
		bool guardmode;
		static const int _scav_hitPoints = 100;
		static const int _scav_energyPoints = 50;
		static const int _scav_attackDamage = 20;
};

#endif