#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {
	std::cout << GREEN << "DiamondTrap default constructor called" << RESET
			  << std::endl;
	this->_name = "default";
	this->_hitPoints = FragTrap::_frag_hitPoints;
	this->_energyPoints = ScavTrap::_scav_energyPoints;
	this->_attackDamage = FragTrap::_frag_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"),
											  FragTrap(name + "_clap_name") {
	this->_name = name;
	this->_hitPoints = FragTrap::_frag_hitPoints;
	this->_energyPoints = ScavTrap::_scav_energyPoints;
	this->_attackDamage = FragTrap::_frag_attackDamage;
	std::cout << GREEN << "DiamondTrap name constructor called" << RESET
			  << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << GREEN << "DiamondTrap copy constructor called" << RESET
			  << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src) {
	std::cout << GREEN << "DiamondTrap assignation operator called" << RESET
			  << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << RED << "DiamondTrap destructor called" << RESET << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}