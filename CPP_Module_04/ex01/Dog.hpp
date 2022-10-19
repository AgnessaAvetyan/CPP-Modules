#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *b_dog;
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator= (const Dog &obj);
    Brain *getBrain();
    void makeSound() const;
    
    ~Dog();
};

#endif