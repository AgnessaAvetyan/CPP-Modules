#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n)
    { N = n; }

Span::Span(const Span &span)
    { *this = span; }

Span &Span::operator=(const Span &span)
{
    if (this != &span)
        N = span.N;
    return (*this);
}

void    Span::addNumber(unsigned int n)
{
    if (ms.size() == N) throw SizeException();
    ms.insert(n);
}

unsigned int Span::longestSpan()
{
    if (ms.size() == 0 || ms.size() == 1) throw RangeException();
    std::multiset<int>::iterator end = ms.end();
    --end;
    return (*end - *(ms.begin()));
}

unsigned int Span::shortestSpan()
{
    if (ms.size() == 0 || ms.size() == 1) throw RangeException();
    std::multiset<int>::iterator b = ms.begin();
    ++b;
    int min = *b - *(ms.begin());
    for (std::multiset<int>::iterator iter = ms.begin(); b != ms.end(); ++iter)
    {
        if (*b - *iter < min)
        {
            min = *b - *iter;
        }
        ++b;
    }
    return min;
}

const char *Span::RangeException::what() const throw()
    { return "Multiset has too few elements!"; }

const char *Span::SizeException::what() const throw()
    { return "Multiset is full!"; }

Span::~Span(){}
