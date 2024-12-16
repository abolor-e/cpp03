#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hit_points = 100;
    this->attack_damage = 20;
    this->energy_points = 50;
    this->guard_gate = 0;
    std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(str name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->attack_damage = 20;
    this->energy_points = 50;
    this->guard_gate = 0;
    std::cout << "ScavTrap name constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->attack_damage = copy.attack_damage;
    this->energy_points = copy.energy_points;
    this->guard_gate = copy.guard_gate;
    return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    this->guard_gate = copy.guard_gate;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap deconstructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->guard_gate == 1)
        std::cout << "ScavTrap is already in Gate keeper mode!" << std::endl;
    else if (this->guard_gate == 0)
    {
        this->guard_gate = 1;
        std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
    }
}