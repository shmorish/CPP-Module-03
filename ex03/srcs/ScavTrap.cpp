#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap("default"), guardmode(false) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN << "ScavTrap default constructor called" << RESET
			  << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name), guardmode(false) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN << "ScavTrap name constructor called" << RESET
			  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
	: ClapTrap(src) {
	std::cout << GREEN << "ScavTrap copy constructor called" << RESET
			  << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src) {
	std::cout << GREEN << "ScavTrap assignation operator called" << RESET
			  << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate(void) {	
	if (guardmode) {
		std::cout << ORANGE
				<< "ScavTrap " << _name << " has exited Gate keeper mode!" << RESET
				<< std::endl;
		guardmode = false;
	}
	else {
		std::cout << ORANGE
				<< "ScavTrap " << _name << " has entered Gate keeper mode!" << RESET
				<< std::endl;
		guardmode = true;
	}
	return ;
}