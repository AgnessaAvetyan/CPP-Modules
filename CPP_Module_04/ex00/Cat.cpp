#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
    { std::cout << "Cat constructor!" << std::endl; }
    
Cat::Cat(const Cat &obj)
{
    std::cout << "Cat copy constructor!" << std::endl;
    *this = obj;
}

Cat &Cat::operator= (const Cat &obj)
{
    std::cout << "Cat assignment operator!" << std::endl;
    _type = obj._type;
    return (*this);
}

void Cat::makeSound() const
    { std::cout << "Meow!!!" << std::endl; }

Cat::~Cat()
    { std::cout << "Cat destructor!" << std:: endl; }