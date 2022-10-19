#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator> 

template <typename T>
typename T::value_type easyfind(T &container, int value)
{
    typename T::iterator f = std::find(container.begin(), container.end(), value);
    if (f == container.end())
        return 0;
        //throw std::exception();
    return 1;
}

#endif