#include "DiamondTrap.hpp"

int main(){

	std::cout << "________________" << std::endl;
	std::cout << "____ClapTrap____" << std::endl;
	std::cout << "________________" << std::endl;

	ClapTrap robot_1("Alex");
	robot_1.attack("Bill");
	robot_1.takeDamage(40);
	robot_1.beRepaired(25);
	std::cout << "________________" << std::endl;
	ClapTrap robot_2 = robot_1;
	robot_2.attack("Bill");
	robot_2.takeDamage(42);
	robot_2.beRepaired(21);

	getchar();

	std::cout << "________________" << std::endl;
	std::cout << "____ScavTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	ScavTrap robot_3("May");
	robot_3.attack("Bill");
	robot_3.takeDamage(18);
	robot_3.beRepaired(40);
	robot_3.guardGate();
	std::cout << "________________" << std::endl;
	ScavTrap robot_4 = robot_3;
	robot_4.attack("Bill");
	robot_4.takeDamage(707);
	robot_4.beRepaired(0);
	robot_4.guardGate();

	getchar();

	std::cout << "________________" << std::endl;
	std::cout << "____FragTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	FragTrap robot_5("Sam");
	robot_5.attack("Bill");
	robot_5.takeDamage(18);
	robot_5.beRepaired(40);
	robot_5.highFivesGuys();
	std::cout << "________________" << std::endl;
	FragTrap robot_6 = robot_5;
	robot_6.attack("Bill");
	robot_6.takeDamage(1);
	robot_6.beRepaired(1024);
	robot_6.highFivesGuys();

	getchar();

	std::cout << "________________" << std::endl;
	std::cout << "___DiamondTrap__" << std::endl;
	std::cout << "________________" << std::endl;
	DiamondTrap robot_7("George");
	robot_7.attack("Bill");
	robot_7.takeDamage(89);
	robot_7.beRepaired(404);
	robot_7.whoAmI();
	robot_7.highFivesGuys();
	robot_7.guardGate();
	std::cout << "________________" << std::endl;
	DiamondTrap robot_8 = robot_7;
	robot_8.attack("Bill");
	std::cout << "hit point " << robot_8.getHitPoints() << std::endl;
	robot_8.whoAmI();
	robot_8.takeDamage(99);
	robot_8.beRepaired(111);
	robot_8.whoAmI();
	robot_8.highFivesGuys();
	robot_8.guardGate();

	getchar();

	std::cout << "________________" << std::endl;
	std::cout << "___destructor___" << std::endl;
	std::cout << "________________" << std::endl;

}
