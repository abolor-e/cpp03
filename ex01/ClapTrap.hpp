#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

typedef std::string str;

class ClapTrap
{
    protected:
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
    ClapTrap &operator=(ClapTrap const &copy);
    ClapTrap(ClapTrap const &copy);
	virtual ~ClapTrap();
};

#endif