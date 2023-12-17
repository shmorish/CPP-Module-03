#include "../includes/DiamondTrap.hpp"

int main(void){
  {
	std::cout << std::endl;
	std::cout << "===========================NORMAL TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap tmp("Taro");
	DiamondTrap diamond_trap(tmp);
	diamond_trap = tmp;
	diamond_trap.attack("Jiro");
	diamond_trap.attack("Saburo");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.takeDamage(2);
	diamond_trap.takeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.beRepaired(2);
	diamond_trap.beRepaired(10);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.highFivesGuys();
	diamond_trap.highFivesGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.guardGate();
	diamond_trap.guardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.whoAmI();
	diamond_trap.whoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================ENERGY TEST===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	for (int i = 0; i < 51; ++i) {
	  diamond_trap.attack("Jiro");
	}
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.takeDamage(2);
	diamond_trap.takeDamage(3);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.beRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.highFivesGuys();
	diamond_trap.highFivesGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.guardGate();
	diamond_trap.guardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.whoAmI();
	diamond_trap.whoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST1===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.takeDamage(std::numeric_limits<uint>::max());
	diamond_trap.takeDamage(30);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.beRepaired(2);
	diamond_trap.beRepaired(2);
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.highFivesGuys();
	diamond_trap.highFivesGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.guardGate();
	diamond_trap.guardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.whoAmI();
	diamond_trap.whoAmI();
  }
  {
	std::cout << std::endl;
	std::cout << "===========================HP TEST2===========================" << std::endl;
	std::cout << "===========================ATTACK===========================" << std::endl;
	DiamondTrap diamond_trap("Taro");
	std::cout << "===========================DAMAGE===========================" << std::endl;
	diamond_trap.takeDamage(2);
	std::cout << "===========================REPAIR===========================" << std::endl;
	diamond_trap.beRepaired(2);
	diamond_trap.beRepaired(std::numeric_limits<uint>::max());
	diamond_trap.beRepaired(std::numeric_limits<uint>::max());
	std::cout << "===========================HIGH FIVE GUYS===========================" << std::endl;
	diamond_trap.highFivesGuys();
	diamond_trap.highFivesGuys();
	std::cout << "===========================GUARD GATE===========================" << std::endl;
	diamond_trap.guardGate();
	diamond_trap.guardGate();
	std::cout << "===========================WHO AM I===========================" << std::endl;
	diamond_trap.whoAmI();
	diamond_trap.whoAmI();
  }
  return 0;
}