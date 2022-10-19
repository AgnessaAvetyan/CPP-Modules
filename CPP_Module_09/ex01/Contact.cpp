#include "main.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::set_values(std::string f, std::string l, std::string n, std::string p, std::string d)
{
    f_name = f;
    l_name = l;
    n_name = n;
    p_number = p;
    d_secrec = d;
}

std::string Contact::get_f_name()
    { return (f_name); }

std::string Contact::get_l_name()
    { return (l_name); }

std::string Contact::get_n_name()
    { return (n_name); }

void    Contact::print(void)
{
    std::cout << "First name: " << this->f_name << std::endl;
    std::cout << "Last name: " << this->l_name << std::endl;
    std::cout << "Nickname: " << this->n_name << std::endl;
    std::cout << "Phone number: " << this->p_number << std::endl;
    std::cout << "Secret darkest: " << this->d_secrec << std::endl;
}