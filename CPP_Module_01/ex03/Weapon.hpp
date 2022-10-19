#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(const char *type);
    void setType(std::string type);
    std::string const &getType() const;
};

#endif