#include "Convert.hpp"

Convert::Convert(){}

Convert::Convert(const Convert &c)
    { *this = c; }

Convert &Convert::operator=(const Convert &c)
{
    if (this != &c)
        return (*this);
    return (*this);
}

uintptr_t Convert::serialize(Data* ptr)
    { return reinterpret_cast<uintptr_t>(ptr); }

Data* Convert::deserialize(uintptr_t raw)
    { return reinterpret_cast<Data *>(raw); }

Convert::~Convert(){}

std::ostream &operator<<(std::ostream &out, Data const &c)
{
    out << "char: " << c._c << std::endl;
    out << "int: " << c._i << std::endl;
    out << "float: " << c._f << "f" << std::endl;
    out << "double: " << c._d << std::endl;

    return out;
}