#include "Zombie.hpp"

void Zombie::annouce(void)
    { std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie(std::string n)
    { name = n; }

Zombie::~Zombie()
    { std::cout << "Dead: " << name << std::endl; }
