#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--- Basic ClapTrap Tests ---" << std::endl;
	{
		ClapTrap claptrap("CT-Basic");
		claptrap.attack("Dummy");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	std::cout << "----------------------------" << std::endl << std::endl;

	std::cout << "--- ScavTrap Construction/Destruction Test ---" << std::endl;
	{
		ScavTrap scav("SC4V-TP");
		std::cout << scav.getName() << " HP: " << scav.getHitPoints() << " EP: " << scav.getEnergyPoints() << " AD: " << scav.getAttackDamage() << std::endl;

		ScavTrap scavCopy(scav);
		std::cout << scavCopy.getName() << " (copy) HP: " << scavCopy.getHitPoints() << " EP: " << scavCopy.getEnergyPoints() << " AD: " << scavCopy.getAttackDamage() << std::endl;

		ScavTrap scavAssign("SC4V-Assign");
		scavAssign = scav;
		std::cout << scavAssign.getName() << " (assigned) HP: " << scavAssign.getHitPoints() << " EP: " << scavAssign.getEnergyPoints() << " AD: " << scavAssign.getAttackDamage() << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl << std::endl;

	std::cout << "--- ScavTrap Action Tests ---" << std::endl;
	{
		ScavTrap hero("HeroBot");

		hero.attack("BadGuy");
		hero.takeDamage(30);
		hero.beRepaired(20);
		hero.guardGate();

		hero.takeDamage(150);
		hero.attack("Ghost");
		hero.guardGate();
	}
	std::cout << "-----------------------------" << std::endl << std::endl;

	std::cout << "--- ScavTrap Energy Test ---" << std::endl;
	{
		ScavTrap energyBot("E-Bot");
		for (int i = 0; i < 51; ++i)
		{
			std::cout << "Attack attempt " << i + 1 << ": ";
			energyBot.attack("Training Dummy");
		}
		energyBot.beRepaired(10);
	}
	std::cout << "---------------------------" << std::endl << std::endl;

	return (0);
}