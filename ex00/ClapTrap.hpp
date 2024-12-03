#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef std::string str;

class ClapTrap
{
    private:
    str name;
    int hit_points;
    int energy_points;
    int attack_damage;

    public:
    void    attack(const str& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    ClapTrap();
    ClapTrap(str name);
	~ClapTrap();
};

#endif