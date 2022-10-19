#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fix);
    Fixed   &operator= (const Fixed &fix);
    void    setRawBits(int const raw);
    int     getRawBits(void) const;
    ~Fixed();
};

#endif