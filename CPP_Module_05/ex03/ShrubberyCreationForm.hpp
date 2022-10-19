#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include <fstream>
#include "Form.hpp"

#define ASCII_TREE \
"              * *\n"				\
"           *    *  *\n"			\
"      *  *    *     *  *\n"		\
"     *     *    *  *    *\n"		\
" * *   *    *    *    *   *\n"		\
" *     *  *    * * .#  *   *\n"	\
" *   *     * #.  .# *   *\n"		\
"  *     \"#.  #: #\" * *    *\n"	\
" *   * * \"#. ##\"       *\n"		\
"   *       \"###\n"				\
"             \"##\n"				\
"              ##.\n"				\
"              .##:\n"				\
"              :###\n"				\
"              ;###\n"				\
"            ,####.\n"				\
"           .######.\n"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
    void execute(Bureaucrat const &executor) const;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
    ~ShrubberyCreationForm();
};

#endif