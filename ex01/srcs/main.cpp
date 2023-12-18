#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	{
		std::cout << "----- Test [0] case -----" << std::endl;
		ScavTrap	Alice("Alice");
		ScavTrap	Bob("Bob");

		for (int i = 0; i < 6; i++) {
			Alice.attack("Bob");
			Bob.takeDamage(20);
		}
		Bob.beRepaired(100);
		Alice.guardGate();
		Bob.guardGate();
		Alice.guardGate();
		Bob.guardGate();
	}
	{
		std::cout << "----- Test [1] case -----" << std::endl;
		ScavTrap	Alice("Alice");

		for (int i = 0; i < 51; i++) {
			std::cout << i << " ";
			Alice.attack("target");
		}
		Alice.takeDamage(5);
		Alice.beRepaired(10);
	}
}