#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const int int_num);
    Fixed(const float float_num);
    Fixed(const Fixed &fix);

    Fixed   &operator= (const Fixed &fix);

    float   toFloat(void) const;
    int     toInt(void) const;

    void    setRawBits(int const raw);
    int     getRawBits(void) const;
    ~Fixed();
};

std::ostream &operator<< (std::ostream &obj, const Fixed &fix);

#endif