#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor!!!" << std::endl;
    _name = "ClapTrap";
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "ClapTrap Default constructor, name: "<< _name << "!!!"  << std::endl;
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name, int h, int e, int d)
    : _name(name), hit_point(h), energy_point(e), attack_damage(d)
{
     std::cout << "ClapTrap constructor, name: " << _name << "!!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    std::cout << "ClapTrap Copy constructor!!!" << std::endl;
    *this = cp;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &ref)
{
    std::cout << "ClapTrap Copy assignment operator!!!" << std::endl;
    _name = ref._name;
    hit_point = ref.hit_point;
    energy_point = ref.energy_point;
    attack_damage = ref.attack_damage;

    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_point <= 0 || energy_point <= 0)
    {
        std::cout << "ClapTrap: Don't have any hit point or energy point!!!" << std::endl;
        std::cout << "ClapTrap: Hit point: " << hit_point << std::endl;
        std::cout << "ClapTrap: Energy point: " << energy_point << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
    << attack_damage << " points of damage!" << std::endl;
    energy_point--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap attacks, then its target to lose " << amount
    << " hit points!" << std::endl; 
    hit_point -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap repairs itself, then it gets " << amount
    << " hit points back!" << std::endl;
    hit_point += amount;
    energy_point--;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor!!!" << std::endl;
}