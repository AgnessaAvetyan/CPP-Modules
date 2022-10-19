#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void Karen::debug(void)
{
    std::cout << "I love having extra bacon for my" <<
        " 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << 
    "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" <<
    " years whereas you started working here since last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    void (Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    bool  check[] = {level == "debug", level == "info", level == "warning", level == "error"};

    int i = 0;
    while (check[i] == 0)
        i++;
    (this->*f[i])();
}