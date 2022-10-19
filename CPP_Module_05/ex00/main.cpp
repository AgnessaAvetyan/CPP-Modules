#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("1", 10);
        std::cout << b << std::endl;
        b.decGrade();
        std::cout << b << std::endl;
        b.incGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat b("2", 0);
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try
    {
        Bureaucrat b("3", 151);
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try
    {
        Bureaucrat b("4", 150);
        std::cout << b << std::endl;
        b.incGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try
    {
        Bureaucrat b("5", 1);
        std::cout << b << std::endl;
        b.decGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}