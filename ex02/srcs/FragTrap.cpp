#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "FragTrap default constructor called" << RESET
			  << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "FragTrap name constructor called" << RESET
			  << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << GREEN << "FragTrap copy constructor called" << RESET
			  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src) {
	std::cout << GREEN << "FragTrap assignation operator called" << RESET
			  << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << RED << "FragTrap destructor called" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << CYAN
			<< "FragTrap " << _name << " requests a high five!" << RESET
			<< std::endl;
	return ;
}