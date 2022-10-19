#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string _target;
    void execute(Bureaucrat const &executor) const;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
    ~RobotomyRequestForm();
};

#endif