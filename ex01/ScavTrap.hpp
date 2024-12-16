#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        int guard_gate;
    public:
        ScavTrap();
        ScavTrap(str name);
        ScavTrap &operator=(ScavTrap const &copy);
        ScavTrap(ScavTrap const &copy);
        virtual ~ScavTrap();

        void    guardGate();
};

#endif