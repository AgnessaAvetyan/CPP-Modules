#include "Convert.hpp"

Convert::Convert(){}

Convert::Convert(std::string arg)
{
    try
    {
        _arg = std::stod(arg);
    }
    catch(...)
    {
        check = 1;
    }
    toChar();
    toInt();
    toFloat();
    toDouble();
}

Convert::Convert(const Convert &c)
    { *this = c; }

Convert &Convert::operator=(const Convert &c)
{
    if (this != &c)
    {
        _arg = c._arg;
        check = c.check;
    }
    return (*this);
}

void Convert::toChar()
{
    if (isnan(_arg) || check)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(_arg))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(_arg) << std::endl;
}

void Convert::toInt()
{
    if (isnan(_arg) || check || _arg > INT_MAX || _arg < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(_arg) << std::endl;
}

void Convert::toFloat()
{
    std::cout << std::fixed;
    std::cout.precision(1);

    if (check)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(_arg) << "f" << std::endl;
}

void Convert::toDouble()
{
    if (check)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(_arg) << std::endl;
}

Convert::~Convert(){}

