#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137)
    { _target = "Emoty"; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : Form(obj.getName(), obj.getGradeSign(), obj.getGradeExecute()), _target(obj._target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
    if (this != &ref)
        _target = ref._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream file(_target + "_shrubbery");
    file << ASCII_TREE;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}