#include "Form.hpp"

Form::Form()
    : _name("Form"), _gradeSign(1), _gradeExecute(1)
    { sign = false;}

Form::Form(const Form &obj) 
    : _name(obj.getName()), _gradeSign(obj.getGradeSign()), _gradeExecute(obj.getGradeExecute())
    {  sign = obj.getSign(); }


Form::Form(std::string name, int gradeSign, int gradeExecute) 
    : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    sign = false;
    if (_gradeExecute > 150 || _gradeSign > 150) throw GradeTooLowException();
    if (_gradeExecute < 1 || _gradeSign < 1) throw GradeTooHighException();
}

Form &Form::operator=(Form const &obj)
{
    if (this != &obj)
        sign = obj.getSign();
    return (*this);
}

std::string Form::getName() const
    { return _name; }

bool Form::getSign() const
    { return sign; }

int Form::getGradeSign() const
    { return _gradeSign; }

int Form::getGradeExecute() const
    { return _gradeExecute; }

void Form::beSigned(const Bureaucrat &b)
{
    if (sign == 1) throw std::runtime_error("Form already signed!");
    if (b.getGrade() > _gradeSign) throw GradeTooLowException();
    sign = true;
}

void Form::execute(Bureaucrat const &executor) const
{
    if (sign == 0) throw std::runtime_error("Form did't sign");
    if (executor.getGrade() > _gradeExecute) throw GradeTooLowException();
} 

const char *Form::GradeTooHighException::what() const throw()
    { return "Grade is too high!"; }

const char *Form::GradeTooLowException::what() const throw()
    { return "Grade is too low!"; }

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    out << obj.getName() << ", form grade sign " << obj.getGradeSign() << std::endl;
    out << obj.getName() << ", form grade execute " << obj.getGradeExecute() << std::endl;
    out << obj.getName() << ", form sign " << obj.getSign() << std::endl;
    
    return (out);
}

Form::~Form(){}