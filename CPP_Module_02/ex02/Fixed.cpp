#include "Fixed.hpp"

Fixed::Fixed()
    {fixed_point = 0;}

Fixed::Fixed(const int int_num)
    {fixed_point = int_num << fractional_bits;}

Fixed::Fixed(const float float_num)
    {fixed_point = roundf(float_num * (1 << fractional_bits));}

Fixed::Fixed(const Fixed &fix)
    {*this = fix;}

Fixed &Fixed::operator=(const Fixed &fix)
{
    fixed_point = fix.getRawBits();
    return (*this);
}

bool    Fixed::operator> (Fixed const &n) const
    {return (fixed_point > n.fixed_point);}

bool    Fixed::operator< (Fixed const &n) const
    {return (fixed_point < n.fixed_point);}

bool    Fixed::operator>= (Fixed const &n) const
    {return (fixed_point >= n.fixed_point);}

bool    Fixed::operator<= (Fixed const &n) const
    {return (fixed_point <= n.fixed_point);}

bool    Fixed::operator== (Fixed const &n) const
    {return (fixed_point == n.fixed_point);}

bool    Fixed::operator!= (Fixed const &n) const
    {return (fixed_point != n.fixed_point);}

Fixed   const Fixed::operator+ (Fixed const &n)
{
    Fixed   num(toFloat() + n.toFloat());
    return (num);
}

Fixed   const Fixed::operator- (Fixed const &n)
{
    Fixed   num(toFloat() - n.toFloat());
    return (num);
}

Fixed   const Fixed::operator* (Fixed const &n)
{
    Fixed   num(toFloat() * n.toFloat());
    return (num);
}

Fixed   const Fixed::operator/ (Fixed const &n)
{
    Fixed   num(toFloat() / n.toFloat());
    return (num);
}

Fixed const &Fixed::operator++(void)
{
    this->fixed_point += 1;
    return (*this);
}

Fixed const Fixed::operator++(int)
{
    Fixed   num(*this);

    this->fixed_point += 1;
    return (num);
}

Fixed const &Fixed::operator--(void)
{
    this->fixed_point -= 1;
    return (*this);
}

Fixed const Fixed::operator--(int)
{
    Fixed   num(*this);

    this->fixed_point -= 1;
    return (num);
}

Fixed Fixed::max(Fixed n1, Fixed n2)
{
    if (n1 > n2)
        return (n1);
    else
        return (n2);
}

Fixed Fixed::min(Fixed n1, Fixed n2)
{
    if (n1 < n2)
        return (n1);
    else
        return (n2);
}

float   Fixed::toFloat(void) const
    {return ((float)fixed_point / (1 << fractional_bits));}

int     Fixed::toInt(void) const
    {return (fixed_point >> fractional_bits);}

void    Fixed::setRawBits(int const raw)
    {fixed_point = raw;}

int    Fixed::getRawBits(void) const
    {return (fixed_point);}

Fixed::~Fixed(){}

std::ostream &operator<<(std::ostream &obj, const Fixed &fix)
{
    obj << fix.toFloat();
    return (obj);
}