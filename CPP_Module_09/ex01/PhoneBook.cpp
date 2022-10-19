#include "main.hpp"

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

int	PhoneBook::check_exit(std::string str)
{
    for (int i = 0; i < int(str.length()); i++)
			str[i] = tolower(str[i]);
    if (str == "exit")
        return (0);
    return (1);
}

std::string PhoneBook::check(std::string s)
{
    while (s.length() == 0)
    {
        std::cout << "Empty line!\nEnter valid data: ";
        std::getline(std::cin, s);
    }
    if (!check_exit(s))
        exit(0);
    return (s);
}

std::string PhoneBook::check_number(std::string number)
{
    for (int i = 0; i < int(number.length()); i++)
    {
        if (!check_exit(number))
            exit(0);
        if (number[i] < '0' || number[i] > '9')
        {
            std::cout << "Invalid number. Phone number contains only numbers.Try again!\nPhone Number: ";
            std::getline(std::cin , number);
            i = 0;
        }
    }
    return (number);
}

std::string PhoneBook::check_len(std::string str)
{
    std::cout << "|" << std::setw(10);
    if (int(str.length()) > 10)
    {
        std::string s = str.substr(0, 10);
        return (s.append("."));
    }
    return (str);
}

void PhoneBook::add(int i)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First Name: ";
    std::getline(std::cin, first_name);
    first_name = PhoneBook::check(first_name);
    std::cout << "Last Name: ";
    std::getline(std::cin, last_name);
    last_name = PhoneBook::check(last_name);
    std::cout << "Nick Name: ";
    std::getline(std::cin, nickname);
    nickname = PhoneBook::check(nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phone_number);
    phone_number = PhoneBook::check(phone_number);
    phone_number = PhoneBook::check_number(phone_number);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
    darkest_secret = PhoneBook::check(darkest_secret);
	contact[i % 8].set_values(first_name, last_name, nickname, phone_number, darkest_secret);
    std::cout<< "\nYour contact add in PhoneBook!!" << std::endl;
}

void	PhoneBook::search(int c)
{
	std::string i;
    int         index;

	if (c == 0)
		std::cout << "Ohh, PhoneBook is empty!!\nPlease, add contact!!" << std::endl;
	else
	{
        print_contacts(c);
        std::cout << "You can choose your favorite contact for more information, enter index: ";
        std::getline(std::cin, i);
		while (i < "0" || i > "7" || i.length() != 1)
		{
			if (!check_exit(i))
				exit(0);
			std::cout << "Invalid index, please enter number in range(0..7): ";
			std::getline(std::cin, i);
		}
        index = stoi(i);
        if (index < c && index < 8) 
            contact[index].print();
        else
            std::cout << "Your input number out of range." << std::endl;
	}
}

void    PhoneBook::print_contacts(int count)
{
    int i = 0;

    std::cout << "\e[1m" << "|-------------------------------------------|"<< std::endl;
    std::cout << check_len("Index");
    std::cout << check_len("First Name");
    std::cout << check_len("Last Name");
    std::cout << check_len("Nickname") << '|' << std::endl;
    std::cout << "|-------------------------------------------|"<< std::endl;
    while (i < count && i < 8)
    { 
        std::cout << '|' << "\e[0m" << std::setw(10) << i ;
        std::cout << check_len(contact[i].get_f_name());
        std::cout << check_len(contact[i].get_l_name());
        std::cout << check_len(contact[i].get_n_name()) << '|' << std::endl;
        i++;
    }
    std::cout << "\e[1m" <<"|-------------------------------------------|"<< std::endl;
}