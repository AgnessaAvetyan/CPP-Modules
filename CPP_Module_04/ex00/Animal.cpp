#include "Animal.hpp"

Animal::Animal()
{ 
    std::cout << "Animal constructor!" << std::endl;
    _type = "Animal";
}

Animal::Animal(std::string type) : _type(type)
    { std::cout << "Animal " << _type << " constructor!" << std::endl; }

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor!" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal assignment operator!" << std::endl;
    _type = obj._type;
    return (*this);
}

std::string Animal::getType(void) const
    { return (_type); }

void    Animal::makeSound() const
    { std::cout << "Abstract sound!" << std::endl; }

Animal::~Animal()
    { std::cout << "Animal destructor!" << std::endl; }