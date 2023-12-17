#include "../includes/ClapTrap.hpp"

bool is_alive(ClapTrap &clap_trap) {
	if (clap_trap.get_hit_points() > 0) {
		return (true);
	}
	return (false);
}

ClapTrap::ClapTrap(void)
    : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << "ClapTrap default constructor called" << RESET
              << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << GREEN << "ClapTrap name constructor called" << RESET
              << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << BLUE << "ClapTrap copy constructor called" << RESET
			  << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
    std::cout << BLUE << "ClapTrap assignation operator called" << RESET
			  << std::endl;
    if (this != &src) {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << RED << "ClapTrap destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (!is_alive(*this)) {
		std::cout << RED
				<< "ClapTrap " << _name << " is already dead!" << RESET
				<< std::endl;
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout << ORANGE
				<< "ClapTrap " << _name << " has no energy!" << RESET
				<< std::endl;
		return ;
	}
	_energyPoints--;
    std::cout << ORANGE
			<< "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!is_alive(*this)) {
		std::cout << RED
				<< "ClapTrap " << _name << " is already dead!" << RESET
				<< std::endl;
		return ;
	}
	if (_hitPoints < amount) {
		_hitPoints = 0;
	}
	else
		_hitPoints -= amount;
    std::cout << YELLOW
			<< "ClapTrap " << _name << " takes " << amount
            << " points of damage!"
			<< " Current HP: " << _hitPoints << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!is_alive(*this)) {
		std::cout << RED
				<< "ClapTrap " << _name << " is already dead!" << RESET
				<< std::endl;
		return ;
	}
	if (_hitPoints == std::numeric_limits<uint>::max()) {
		std::cout << PINK
				<< "ClapTrap " << _name << " is already full HP!" << RESET
				<< std::endl;
		return ;
	}
	if (_energyPoints <= 0) {
		std::cout << PINK
				<< "ClapTrap " << _name << " has no energy!" << RESET
				<< std::endl;
		return ;
	}
	_energyPoints--;
	if (_hitPoints + amount < _hitPoints) {
		_hitPoints = std::numeric_limits<uint>::max();
	}
	else
		_hitPoints += amount;
    std::cout  << PINK
			<< "ClapTrap " << _name << " is repaired by " << amount
            << " points!" << " Current HP: " << _hitPoints << RESET
			<< std::endl;
	
}

unsigned int ClapTrap::get_hit_points(void) const {
	return (_hitPoints);
}