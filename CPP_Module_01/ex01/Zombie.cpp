#include "Zombie.hpp"

void Zombie::annouce(void)
    { std::cout << _name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl; }

void    Zombie::set_name(std::string name)
    { _name = name; }

Zombie::~Zombie()
    { std::cout << "Dead: " << _name << std::endl; }