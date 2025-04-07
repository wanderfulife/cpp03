#include "ScavTrap.hpp"

// Default Constructor - Initializes with ScavTrap specific values
ScavTrap::ScavTrap(void) : ClapTrap()
{
	// Call base default constructor
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called for " << this->_name << std::endl;
}

// Name Constructor - Initializes with ScavTrap specific values
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	// Call base name constructor
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Name Constructor called for " << this->_name << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	// Call base copy constructor
	std::cout << "ScavTrap Copy Constructor called to copy " << other._name << std::endl;
	// *this = other; // Avoid slicing
}

// Copy Assignment Operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy Assignment Operator called for " << this->_name << " = " << other._name << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other); // Call base assignment operator
									// ScavTrap has no additional members to copy
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

// Overridden attack Member Function
void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no hit points left, it cannot attack!" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points left to attack!" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! (ScavTrap style)" << std::endl;
}

// guardGate Member Function
void ScavTrap::guardGate()
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't enter Gate keeper mode, it's destroyed!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}