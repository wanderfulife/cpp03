#include "ClapTrap.hpp"

int	main(void)
{
	// Create a ClapTrap
	ClapTrap claptrap("CT-001");

	// Test the attack function
	claptrap.attack("Target Dummy");

	// Test taking damage
	claptrap.takeDamage(5);

	// Test repairing
	claptrap.beRepaired(3);

	// Test taking too much damage
	claptrap.takeDamage(10);

	// Test attacking after being defeated
	claptrap.attack("Target Dummy");

	// Create another ClapTrap using copy constructor
	ClapTrap claptrap2 = ClapTrap("CT-002");
	claptrap2.attack("Enemy");
	claptrap2.takeDamage(2);

	// Energy points test
	ClapTrap energyTest("EnergyTester");
	for (int i = 0; i < 11; i++)
	{
		std::cout << "Attempt " << i + 1 << ": ";
		energyTest.attack("Dummy");
	}

	return (0);
}