#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor!!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap default constructor, name: " << _name << "!!!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_point <= 0 || energy_point <= 0)
    {
        std::cout << "ScavTrap: Don't have any hit point or energy point!!!" << std::endl;
        std::cout << "ScavTrap: Hit point: " << hit_point << std::endl;
        std::cout << "ScavTrap: Energy point: " << energy_point << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
    << attack_damage << " points of damage!" << std::endl;
    energy_point--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor!!!" << std::endl; 
}