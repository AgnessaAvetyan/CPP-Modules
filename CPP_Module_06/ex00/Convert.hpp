#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <math.h>

class Convert
{
private:
    double  _arg;
    bool    check;
    void    toInt();
    void    toFloat();
    void    toDouble();
    void    toChar();
public:
    Convert();
    Convert(std::string arg);
    Convert(const Convert &c);
    Convert &operator=(const Convert &c);
    ~Convert();
};

#endif