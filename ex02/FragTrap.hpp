#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

// FragTrap class inherits publicly from ClapTrap
class FragTrap : public ClapTrap {

public:
	// Orthodox Canonical Form
	FragTrap(void); // Default Constructor
	FragTrap(std::string name); // Name Constructor
	FragTrap(const FragTrap& other); // Copy Constructor
	FragTrap& operator=(const FragTrap& other); // Copy Assignment Operator
	~FragTrap(void); // Destructor

	// Special Member function
	void highFivesGuys(void);

};

#endif // FRAGTRAP_HPP