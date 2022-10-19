#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{ 
    std::cout << "Cat constructor!" << std::endl;
    b_cat = new Brain();
}
    
Cat::Cat(const Cat &obj)
{
    std::cout << "Cat copy constructor!" << std::endl;
    *this = obj;
}

Cat &Cat::operator= (const Cat &obj)
{
    std::cout << "Cat assignment operator!" << std::endl;
    if (this == &obj)
        return (*this);
    delete b_cat;
    b_cat = new Brain();
    b_cat = obj.b_cat;
    _type = obj._type;
    return (*this);
}

void Cat::makeSound() const
    { std::cout << "Meow!!!" << std::endl; }

Brain *Cat::getBrain()
    { return (b_cat); }

Cat::~Cat()
{
    std::cout << "Cat destructor!" << std:: endl;
    delete b_cat;
}