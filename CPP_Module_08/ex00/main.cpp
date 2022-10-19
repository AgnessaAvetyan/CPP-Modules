#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <array>

void    imp_vector()
{
    int check = 0;
    std::vector<int> vec;

    for (int i = 0; i < 100; i++)
        vec.push_back(i + 1);
    check = easyfind(vec, 5);
    if (check == 1)
        std::cout << "Vector: element is found." << std::endl;
    else
        std::cout << "Vector: element is not found." << std::endl;
}

void    imp_list()
{
    int check = 0;
    std::list<int> list;
    
    for (int i = 0; i < 100; i++)
        list.push_back(i + 1);
    check = easyfind(list,  -10);
    if (check == 1)
        std::cout << "List: element is found." << std::endl;
    else
        std::cout << "List: element is not found." << std::endl;
}

void    imp_deque()
{
    int check = 0;
    std::deque<int> deque;
    
    for (int i = 0; i < 100; i++)
        deque.push_front(i * 5);
    check = easyfind(deque,  1125);
    if (check == 1)
        std::cout << "deque: element is found." << std::endl;
    else
        std::cout << "deque: element is not found." << std::endl;
}

void    imp_array()
{
    int check = 0;
    std::array<int, 100> array;
    
    for (int i = 0; i < 100; i++)
        array[i] = i * 10;
    check = easyfind(array,  0);
    if (check == 1)
        std::cout << "array: element is found." << std::endl;
    else
        std::cout << "array: element is not found." << std::endl;
}

int main()
{
    imp_vector();
    imp_list();
    imp_deque();
    imp_array();
    return (0);
}