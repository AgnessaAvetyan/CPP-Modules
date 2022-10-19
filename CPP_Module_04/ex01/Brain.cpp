#include "Brain.hpp"

Brain::Brain()
{ 
    std::cout << "Brain constructor!" << std::endl;
    for (int i = 0; i < 100; i++)
        arr[i] = "$i";
}

Brain::Brain(std::string s)
{ 
    std::cout << "Brain constructor!" << std::endl;
    for (int i = 0; i < 100; i++)
        arr[i] = s;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy constructor!" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain assignment operator!" << std::endl;
    for (int i = 0; i < 100; i++)
        arr[i] = obj.arr[i];
    return (*this);
}

std::string *Brain::getBrain(void)
    { return arr; }

Brain::~Brain()
    { std::cout << "Brain destructor!" << std::endl; }