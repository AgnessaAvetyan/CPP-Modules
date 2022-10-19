#include "iter.hpp"

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    char b[] = {'a', 'b', 'c', 'd', 'f', 'e'};
    float c[] = {21.1, 45.7890, 4567};

    iter<int>(a, 5, print);
    iter<char>(b, 6, print);
    iter<float>(c, 3, print);

    std::cout << std::endl;

    iter<int>(a, 5, increment);
    iter<char>(b, 6, increment);
    iter<float>(c, 3, increment);

}