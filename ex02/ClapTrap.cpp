#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(str name) : hit_points(10), energy_points(10), attack_damage(0)
{
	this->name = name;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
    if (this != &copy)
	{
		std::cout << "Copy assignment operator called" << std::endl;
        this->hit_points = copy.hit_points;
		this->energy_points = copy.energy_points;
		this->attack_damage = copy.attack_damage;
    	return *this;
	}
	else
	{
		std::cout << "Error: ClapTrap copy assignment operation on self" << std::endl;
		return (*this);
	}
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

//Still need to add 2 more canonical form member functions!

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const str& target)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;  
		this->energy_points--;
	}
	if (this->hit_points <= 0)
		std::cout << "No hit points left" << std::endl;
	else if (this->energy_points <= 0)
		std::cout << "No energy points left" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int attackDamage)
{
	if (this->hit_points > 0)
	{
		this->hit_points = this->hit_points - attackDamage;
		std::cout << "ClapTrap " << this->name << " took " << attackDamage << " amount of damage. Left over with " << this->hit_points << " health!" << std::endl;
		if (this->hit_points <= 0)
			std::cout << "You are dead!" << std::endl;
	}
	else if (this->hit_points <= 0)
		std::cout << "You are already dead!" << std::endl;	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0)
	{
		this->hit_points = this->hit_points + amount;
		std::cout << "ClapTrap " << this->name << " got " << amount << " hit points back from repairing!" << std::endl;
		this->energy_points--;
	}
	else if (this->energy_points == 0)
		std::cout << "No energy points left for repairing!" << std::endl;
}