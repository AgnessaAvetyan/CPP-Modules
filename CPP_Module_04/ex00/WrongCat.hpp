#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
    std::string _type;
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator= (const WrongCat &obj); 

    void makeSound() const;

    ~WrongCat();
};

#endif