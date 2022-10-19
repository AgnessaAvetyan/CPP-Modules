#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *b_cat;
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator= (const Cat &obj); 
    Brain *getBrain();
    void makeSound() const;
    
    ~Cat();
};

#endif