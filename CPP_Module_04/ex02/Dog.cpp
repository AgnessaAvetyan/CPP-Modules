#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor!" << std::endl;
    b_dog = new Brain();
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor!" << std::endl;
    *this = obj;
}

Dog &Dog::operator= (const Dog &obj)
{
    std::cout << "Dog assignment operator!" << std::endl;
    if (this == &obj)
        return *this;
    delete b_dog;
    b_dog = new Brain();
    b_dog = obj.b_dog;
    _type = obj._type;
    return (*this);
}

void Dog::makeSound() const
    { std::cout << "Bark!!!" << std::endl; }

Brain *Dog::getBrain()
    { return b_dog; }

Dog::~Dog()
{
    std::cout << "Dog destructor!" << std:: endl;
    delete b_dog;
}