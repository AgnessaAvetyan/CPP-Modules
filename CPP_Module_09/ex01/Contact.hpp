#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string d_secrec;
public:
    Contact();
    void    set_values(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secrec);
    void    print(void);
    std::string get_f_name();
    std::string get_l_name();
    std::string get_n_name();
    ~Contact();
};

#endif