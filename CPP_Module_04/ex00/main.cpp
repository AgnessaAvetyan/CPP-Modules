#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    
    std::cout << std::endl;

    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *c = new WrongCat();

    std::cout << c->getType() << " " << std::endl;
    c->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete c;

    return (0);
}