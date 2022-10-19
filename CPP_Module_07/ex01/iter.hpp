#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void increment(T element)
{
    element++;
    std::cout << element << " ";
}

template <typename T>
void print(T element)
{
    std::cout << element << " ";
}

template <typename T>
void iter(T *array, int length, void(*func)(T))
{
    for (int i = 0; i < length; i++)
        func(array[i]);
    std::cout << std::endl;
}

#endif