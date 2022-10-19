#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &obj);
    Animal &operator= (const Animal &obj);

    virtual void makeSound() const = 0;
    std::string getType(void) const;
    
    virtual ~Animal();
};

#endif