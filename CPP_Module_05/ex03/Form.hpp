#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool sign;
    const int _gradeSign;
    const int _gradeExecute;

public:
    Form();
    Form(const Form &obj);
    Form(std::string name, int gradeSign, int gradeExecute);
    Form &operator=(const Form &obj);

    std::string getName() const;
    bool    getSign() const;
    int     getGradeSign() const;
    int     getGradeExecute() const;
    void    beSigned(const Bureaucrat &b);
    virtual void execute(Bureaucrat const &executor) const = 0;

    ~Form();

class GradeTooHighException : public std::exception{
    const char *what() const throw();
};
class GradeTooLowException : public std::exception{
    const char *what() const throw();
};

};

std::ostream &operator<< (std::ostream &out, const Form &obj);

#endif