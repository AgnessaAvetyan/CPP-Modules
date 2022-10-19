#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string _wtype;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator= (const WrongAnimal &obj);

    void makeSound()const;
    std::string getType(void) const;

    ~WrongAnimal();
};

#endif