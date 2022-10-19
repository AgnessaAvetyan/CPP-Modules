#include "main.hpp"

int main(void)
{
	int			count;
    std::string cmd;
    PhoneBook   phonebook;

	count = 0;
	std::cout << "Hii, this is PhoneBook!!!" << std::endl;
    while (1)
    {
		std::cout << "Enter Your command: ";
        std::getline(std::cin, cmd);
        for (int i = 0; i < int(cmd.length()); i++)
			cmd[i] = tolower(cmd[i]);
        if (cmd == "add")
        {
			phonebook.add(count);
			count++;
		}
		else if (cmd == "search")
			phonebook.search(count);
		else if (cmd == "exit")
		{
			std::cout << "\nByy!!!!\n" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command, please write only 'add', 'search' or 'exit'" << std::endl;
    }
    return (0);
}