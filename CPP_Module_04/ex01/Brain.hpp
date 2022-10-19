#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
    std::string arr[100];
public:
    Brain();
    Brain(std::string s);
    Brain(const Brain &obj);
    Brain &operator=(const Brain &obj);

    std::string *getBrain(void);
    ~Brain();
};

#endif