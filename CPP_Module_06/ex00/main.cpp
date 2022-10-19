#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Invalid argument count!" << std::endl;
        return (0);
    }

    Convert Convert(argv[1]);
    
    return (0);
}