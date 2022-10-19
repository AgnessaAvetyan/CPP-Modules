#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat b1("B1", 100);
        Bureaucrat b2("B2", 150);
        Form f("F1", 100, 150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << f << std::endl;

        b1.signForm(f);

        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat  bureaucrat("Test", 150);
        Bureaucrat  bureaucrat1("Test1", 100);
        Form        form("List", 100, 50);
        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat1 << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        bureaucrat1.signForm(form);
        bureaucrat1.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}