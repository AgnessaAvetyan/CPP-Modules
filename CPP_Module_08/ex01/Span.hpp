#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <set>

class Span
{
private:
    unsigned int N;
    std::multiset<int> ms;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &span);
    Span &operator=(const Span &span);

    template <typename It>
    void    addNumber(It b, It e)
    {
        if (ms.size() == N) throw SizeException();
        while (b != e)
        {
            ms.insert(*b);
            ++b;
        }
    }

    void    addNumber(unsigned int n);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();

    ~Span();

class RangeException : public std::exception
    { const char * what() const throw(); };
class SizeException : public std::exception
    { const char * what() const throw(); };
};



#endif