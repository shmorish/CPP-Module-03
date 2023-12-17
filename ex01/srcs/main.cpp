#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void) {
	ScavTrap	a;
	ScavTrap	b("Bob");
	ScavTrap	c("Carol");
	ScavTrap	d("David");

	std::cout << "-- test a --" << std::endl;
	for (int i = 0; i < 51; i++)
	{
		std::cout << i << ": ";
		a.attack("Bob");
	}
	std::cout << std::endl << "-- test b --" << std::endl;
	b.attack("Carol");
	b.takeDamage(1);
	b.beRepaired(1);
	std::cout << std::endl << "-- test c --" << std::endl;
	c.attack("Bob");
	c.guardGate();
	c.guardGate();
	std::cout << "-- test end --" << std::endl;
}