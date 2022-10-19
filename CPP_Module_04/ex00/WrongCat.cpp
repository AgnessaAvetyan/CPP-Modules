#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
    { std::cout << "WrongCat " << _type << " constructor!" << std::endl; }

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat copy constructor!" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator= (const WrongCat &obj)
{
    std::cout << "WrongCat assignment operator!" << std::endl;
    _type = obj._type;
    return (*this);
}

void WrongCat::makeSound()const
    { std::cout << "Meow!!!" << std::endl; }

WrongCat::~WrongCat()
    { std::cout << "WrongCat Destructor" << std::endl; }