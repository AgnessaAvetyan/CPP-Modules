#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>

class Replace
{
private:
    std::string _file;
    std::string _s1;
    std::string _s2;
    std::string replace_line(std::string str);
public:
    Replace(std::string file, std::string s1, std::string s2);
    void    replace(void);
    ~Replace();
};

#endif