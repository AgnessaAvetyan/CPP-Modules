#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>

struct Data
{
    Data(char c, int i, float f, double d)
        : _c(c), _i(i), _f(f), _d(d){}
    char    _c;
    int     _i;
    float   _f;
    double  _d;
};

class Convert
{
public:
    Convert();
    Convert(std::string arg);
    Convert(const Convert &c);
    Convert &operator=(const Convert &c);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

    ~Convert();
};

std::ostream &operator<<(std::ostream &out, Data const &c);

#endif