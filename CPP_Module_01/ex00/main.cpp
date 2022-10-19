#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    randomChump("Foo");
    zombie = newZombie("Foo");
    zombie->annouce();

    delete zombie;
    return (0); 
}