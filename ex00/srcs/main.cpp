#include "../includes/ClapTrap.hpp"

int main(void)
{
	{
		std::cout << "----- Test [0] case -----" << std::endl;
		ClapTrap clap_trap("Taro");
		clap_trap.attack("target");
		clap_trap.takeDamage(5);
		clap_trap.takeDamage(5);
		clap_trap.beRepaired(5);
	}
	{
		std::cout << "----- Test [1] case -----" << std::endl;
		ClapTrap clap_trap("Taro");
		clap_trap.attack("target");
		clap_trap.takeDamage(5);
		clap_trap.beRepaired(10);
		clap_trap.beRepaired(500);
		clap_trap.beRepaired(5000);
		clap_trap.beRepaired(std::numeric_limits<int>::max());
		clap_trap.beRepaired(std::numeric_limits<uint>::max());
		clap_trap.beRepaired(5);
		clap_trap.beRepaired(std::numeric_limits<uint>::max());
	}
	{
		std::cout << "----- Test [2] case -----" << std::endl;
		ClapTrap clap_trap("Taro");
		for (int i = 0; i < 11; i++) {
			std::cout << i << " ";
			clap_trap.attack("target");
		}
		clap_trap.takeDamage(5);
		clap_trap.beRepaired(10);
		clap_trap.takeDamage(10);
		clap_trap.takeDamage(10);
	}
	return 0;
}