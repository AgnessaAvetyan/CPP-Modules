#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2)
{
	_file = file;
	_s1 = s1;
	_s2 = s2;
}

std::string Replace::replace_line(std::string str)
{
	int index;

	index = str.find(_s1);
	while (index != -1)
	{
		str.erase(index, _s1.length());
		str.insert(index, _s2);
		index = str.find(_s1);
	}
	return (str);
}

void    Replace::replace(void)
{
	std::string		out_file;
	std::string		str;	 
	std::ifstream	fd_in;
	std::ofstream 	fd_out;

	if (_file.length() == 0 || _s1.length() == 0 || _s2.length() <= 0)
	{
		std::cout << "Your argument(s) is(are) invalid!!" << std::endl;
		exit(0);
	}
	fd_in.open(_file);
	if (!fd_in.is_open())
	{
		std::cout << "File is't open!!" << std::endl;
		exit(0);
	}
	fd_in.seekg(0, std::ios::end);
	if (fd_in.tellg() <= 0)
	{
		std::cout << "File is empty!!" << std::endl;
		exit(0);
	}
	fd_in.seekg(0, std::ios::beg);

	out_file = _file + ".replace";
	fd_out.open(out_file);
	if (!fd_out.is_open())
	{
		std::cout << "File is't created!!" << std::endl;
		fd_in.close();
		exit(0);
	}
	while (getline(fd_in, str))
	{
		str = replace_line(str);
		fd_out << str << std::endl;
	}
	fd_in.close();
	fd_out.close();
}

Replace::~Replace(){}