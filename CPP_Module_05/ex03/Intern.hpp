#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &ref);
    Form *makeForm(std::string const &formName, std::string const &target) const;
    ~Intern();
};

#endif