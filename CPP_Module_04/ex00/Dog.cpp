#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
    { std::cout << "Dog constructor!" << std::endl; }

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor!" << std::endl;
    *this = obj;
}

Dog &Dog::operator= (const Dog &obj)
{
    std::cout << "Dog assignment operator!" << std::endl;
    _type = obj._type;
    return (*this);
}

void Dog::makeSound() const
    { std::cout << "Bark!!!" << std::endl; }

Dog::~Dog()
    { std::cout << "Dog destructor!" << std:: endl; }