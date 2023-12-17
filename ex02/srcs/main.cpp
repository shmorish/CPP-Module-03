#include "../includes/FragTrap.hpp"

int	main(void)
{
	FragTrap	a;
	FragTrap	b("Bob");


	std::cout << "-- test a --" << std::endl;
	for (int i = 0; i < 101; i++)
	{
		std::cout << i << ": ";
		a.attack("Bob");
	}
	std::cout << std::endl << "-- test b --" << std::endl;
	b.highFivesGuys();
	b.highFivesGuys();
	b.takeDamage(2);
	b.beRepaired(1);
	std::cout << "-- test end --" << std::endl;
}