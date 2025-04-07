#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap named constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructor called to copy " << other._name << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Assignment Operator called for " << this->_name << " = " << other._name << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hit points left, it cannot attack!" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to attack!" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	actual_damage;

	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
		return ;
	}
	actual_damage = amount;
	if (amount >= _hitPoints)
	{
		actual_damage = _hitPoints;
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
	}
	std::cout << "ClapTrap " << _name << " takes " << actual_damage << " points of damage! Current HP: " << _hitPoints << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no hit points left, it cannot repair itself!" << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to repair!" << std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points! Current HP: " << _hitPoints << std::endl;
		return;
}

// --- Getters ---
std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}
