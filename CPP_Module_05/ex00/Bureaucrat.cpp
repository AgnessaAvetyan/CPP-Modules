#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade)
{
    if (_grade < 1) throw GradeTooHighException();
    if (_grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
    { *this = obj; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        _grade = obj.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
    { return _name; }


int Bureaucrat::getGrade() const
    { return _grade; }

void Bureaucrat::incGrade()
{
    if (_grade == 150) throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::decGrade()
{
    if (_grade == 1) throw GradeTooHighException();
    _grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
    { return "Grade is too high"; }

const char *Bureaucrat::GradeTooLowException::what() const throw()
    { return "Grade is too low"; }

std::ostream &operator<< (std::ostream &obj, const Bureaucrat &b)
    { return obj << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl; }

Bureaucrat::~Bureaucrat(){}