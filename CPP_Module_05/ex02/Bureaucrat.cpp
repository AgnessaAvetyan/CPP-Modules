#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name)
{
    _grade = grade;
    if (_grade < 1) throw GradeTooHighException();
    if (_grade > 150) throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
    : _name(obj._name)
    { _grade = obj._grade; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        _grade = obj._grade;
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

void Bureaucrat::signForm(Form &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " did't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
    { return "Grade is too high"; }

const char *Bureaucrat::GradeTooLowException::what() const throw()
    { return "Grade is too low"; }

std::ostream &operator<< (std::ostream &out, const Bureaucrat &b)
    { return out << b.getName() << ", bureaucrat grade " << b.getGrade(); }

Bureaucrat::~Bureaucrat(){}