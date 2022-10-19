#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor!" << std::endl;
    _wtype = "Animal";
}
WrongAnimal::WrongAnimal(std::string type) : _wtype(type)
    { std::cout << "WrongAnimal " << _wtype << " constructor!" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy constructor!" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &obj)
{
    std::cout << "WrongAnimal assignment operator!" << std::endl;
    _wtype = obj._wtype;
    return (*this);
}

void WrongAnimal::makeSound()const
    { std::cout << "Animal sound!" << std::endl; }

std::string WrongAnimal::getType(void) const
    { return _wtype; }

WrongAnimal::~WrongAnimal()
    { std::cout << "WrongAnimal Destructor" << std::endl; }