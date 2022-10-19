#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap Default constructor!!!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 50)
{
    std::cout << "FragTrap Default constructor, name: " << _name << "!!!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Positive high fives request!!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor!!!" << std::endl;
}