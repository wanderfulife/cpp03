#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--- Basic ClapTrap Test ---" << std::endl;
	{
		ClapTrap a("BasicClap");
		a.attack("Target");
	}
	std::cout << "---------------------------" << std::endl << std::endl;

	std::cout << "--- ScavTrap Test ---" << std::endl;
	{
		ScavTrap b("BasicScav");
		b.attack("Target");
		b.guardGate();
	}
	std::cout << "---------------------" << std::endl << std::endl;

	std::cout << "--- FragTrap Construction/Destruction Test ---" << std::endl;
	{
		FragTrap frag("FR4G-TP");
		std::cout << frag.getName() << " HP: " << frag.getHitPoints() << " EP: " << frag.getEnergyPoints() << " AD: " << frag.getAttackDamage() << std::endl;

		FragTrap fragCopy(frag);
		std::cout << fragCopy.getName() << " (copy) HP: " << fragCopy.getHitPoints() << " EP: " << fragCopy.getEnergyPoints() << " AD: " << fragCopy.getAttackDamage() << std::endl;

		FragTrap fragAssign("FR4G-Assign");
		fragAssign = frag;
		std::cout << fragAssign.getName() << " (assigned) HP: " << fragAssign.getHitPoints() << " EP: " << fragAssign.getEnergyPoints() << " AD: " << fragAssign.getAttackDamage() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl << std::endl;

	std::cout << "--- FragTrap Action Tests ---" << std::endl;
	{
		FragTrap hero("HeroFrag");

		hero.attack("BadGuy");
		hero.takeDamage(30);
		hero.beRepaired(20);
		hero.highFivesGuys();

		hero.takeDamage(150);
		hero.attack("Ghost");
		hero.highFivesGuys();
	}
	std::cout << "-----------------------------" << std::endl << std::endl;

	return (0);
}