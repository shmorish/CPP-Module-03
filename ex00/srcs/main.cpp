#include "../includes/ClapTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl;
		std::cout << "===========================NORMAL TEST===========================" << std::endl;
		std::cout << "===========================attack===========================" << std::endl;
		ClapTrap clap_trap("Taro");
		clap_trap.attack("Jiro");
		clap_trap.attack("Saburo");
		std::cout << "===========================DAMAGE===========================" << std::endl;
		clap_trap.takeDamage(2);
		clap_trap.takeDamage(3);
		std::cout << "===========================REPAIR===========================" << std::endl;
		clap_trap.beRepaired(2);
		clap_trap.beRepaired(10);
  	}
	{
		std::cout << std::endl;
		std::cout << "===========================ENERGY TEST===========================" << std::endl;
		std::cout << "===========================attack===========================" << std::endl;
		ClapTrap clap_trap("Taro");
		for (int i = 0; i < 15; i++) {
			clap_trap.attack("Jiro");
		}
		std::cout << "===========================DAMAGE===========================" << std::endl;
		clap_trap.takeDamage(2);
		clap_trap.takeDamage(3);
		std::cout << "===========================REPAIR===========================" << std::endl;
		clap_trap.beRepaired(2);
	}
  	{
		std::cout << std::endl;
		std::cout << "===========================HP TEST1===========================" << std::endl;
		std::cout << "===========================attack===========================" << std::endl;
		ClapTrap clap_trap("Taro");
		std::cout << "===========================DAMAGE===========================" << std::endl;
		clap_trap.takeDamage(std::numeric_limits<uint>::max());
		clap_trap.takeDamage(30);
		std::cout << "===========================REPAIR===========================" << std::endl;
		clap_trap.beRepaired(2);
		clap_trap.beRepaired(2);
  	}
  	{
		std::cout << std::endl;
		std::cout << "===========================HP TEST2===========================" << std::endl;
		std::cout << "===========================attack===========================" << std::endl;
		ClapTrap clap_trap("Taro");
		std::cout << "===========================DAMAGE===========================" << std::endl;
		clap_trap.takeDamage(2);
		std::cout << "===========================REPAIR===========================" << std::endl;
		clap_trap.beRepaired(2);
		clap_trap.beRepaired(std::numeric_limits<uint>::max());
		clap_trap.beRepaired(std::numeric_limits<uint>::max());
  	}
	return 0;
}