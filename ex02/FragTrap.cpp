#include "FragTrap.hpp"

// Default Constructor - Initializes with FragTrap specific values
FragTrap::FragTrap(void) : ClapTrap() { // Call base default constructor
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called for " << this->_name << std::endl;
}

// Name Constructor - Initializes with FragTrap specific values
FragTrap::FragTrap(std::string name) : ClapTrap(name) { // Call base name constructor
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Name Constructor called for " << this->_name << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) { // Call base copy constructor
	std::cout << "FragTrap Copy Constructor called to copy " << other._name << std::endl;
	// Base class copy constructor handles member copying
}

// Copy Assignment Operator
FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy Assignment Operator called for " << this->_name << " = " << other._name << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other); // Call base assignment operator
		// FragTrap has no additional members specific to it to copy
	}
	return *this;
}

// Destructor
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called for " << this->_name << std::endl;
}

// highFivesGuys Member Function
void FragTrap::highFivesGuys(void) {
	if (this->_hitPoints == 0) {
		std::cout << "FragTrap " << this->_name << " can't request high fives, it's destroyed!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " requests a positive high five! *CLAP* *CLAP*" << std::endl;
}