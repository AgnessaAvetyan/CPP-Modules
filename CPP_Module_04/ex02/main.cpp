#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal  *a[3];

    delete j;
    delete i;

    for (int i = 0; i < 3; i++)
    {
        if (i % 2)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }

    for (int i = 0; i < 3; i++)
        delete a[i];
    
    Cat *cat = new Cat;
    Cat *copy_cat = new Cat();

    copy_cat = cat;

    std::cout << "CopyCat: " << copy_cat->getBrain() << std::endl;
    std::cout << "Cat: " << cat->getBrain() << std::endl;
    
    delete copy_cat;
    // delete cat;

    return (0);
}