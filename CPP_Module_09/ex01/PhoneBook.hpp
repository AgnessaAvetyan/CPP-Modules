#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact		contact[8];
	int			check_exit(std::string str);
	void		print_contacts(int count);
	void		print_one(int i);
	std::string check_len(std::string str);
	std::string check(std::string s);
	std::string check_number(std::string number);
public:
	PhoneBook();
	void	add(int i);
	void	search(int c);
	~PhoneBook();
};

#endif