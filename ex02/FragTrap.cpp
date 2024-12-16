#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    if (this != &obj)
    {
        std::cout << "FragTrap Assignation operator called" << std::endl;
        this->hit_points = obj.hit_points;
        this->energy_points = obj.energy_points;
        this->attack_damage = obj.attack_damage;
        this->name = obj.name;
        return (*this);
    }
    else
    {
        std::cout << "Error: FragTrap copy assignment operation on self" << std::endl;
        return (*this);
    }
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap deconstructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " : High fives bro!? (in a very positive way)" << std::endl;
}