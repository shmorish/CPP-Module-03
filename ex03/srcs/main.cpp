#include "../includes/DiamondTrap.hpp"

int main(void)
{
	{
		std::cout << "----- Test [0] case -----" << std::endl;
		DiamondTrap	Alice("Alice");
		DiamondTrap	Bob("Bob");

		for (int i = 0; i < 6; i++) {
			Alice.attack("Bob");
			Bob.takeDamage(20);
		}
		Alice.guardGate();
		Bob.guardGate();
		Alice.guardGate();
		Bob.guardGate();
		Alice.whoAmI();
		Bob.whoAmI();
	}
	{
		std::cout << "----- Test [1] case -----" << std::endl;
		DiamondTrap	Alice("Alice");

		for (int i = 0; i < 51; i++) {
			std::cout << i << " ";
			Alice.attack("target");
		}
		Alice.takeDamage(5);
		Alice.beRepaired(10);
	}
}