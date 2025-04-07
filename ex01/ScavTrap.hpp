#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

// ScavTrap class inherits publicly from ClapTrap
class ScavTrap : public ClapTrap
{
  public:
	// Orthodox Canonical Form
	ScavTrap(void);                             // Default Constructor
	ScavTrap(std::string name);                 // Name Constructor
	ScavTrap(const ScavTrap &other);            // Copy Constructor
	ScavTrap &operator=(const ScavTrap &other); // Copy Assignment Operator
	~ScavTrap(void);                            // Destructor

	// Overridden Member functions
	void attack(const std::string &target);

	// Special Member function
	void guardGate();
};

#endif // SCAVTRAP_HPP