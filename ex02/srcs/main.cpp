#include "../includes/FragTrap.hpp"

int	main(void)
{
	{
		std::cout << "----- Test [0] case -----" << std::endl;
		FragTrap	Alice("Alice");
		for (int i = 0; i < 101; i++) {
			std::cout << i << ": ";
			Alice.attack("Bob");
		}
		Alice.takeDamage(5);
		Alice.beRepaired(10);
	}
	{
		std::cout << "----- Test [1] case -----" << std::endl;
		FragTrap	Bob("Bob");
		Bob.highFivesGuys();
		Bob.highFivesGuys();
		Bob.takeDamage(2);
		Bob.beRepaired(1);
		Bob.highFivesGuys();
	}
}