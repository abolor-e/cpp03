#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
    //Default Constructor
        FragTrap();
    //Name Constructor
        FragTrap(str name);
    //Copy Constructor
        FragTrap(FragTrap const &obj);
    //Copy assignment operator
        FragTrap &operator=(FragTrap const &obj);
    //Deconstructor
        virtual ~FragTrap();
        void    highFivesGuys(void);
};

#endif