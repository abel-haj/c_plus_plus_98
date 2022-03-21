#include <iostream>
#include "PhoneBook.hpp"

std::string trim_spaces(std::string s)
{
	size_t	i = 0;
	size_t	j = s.size() - 1;

	while(i < j + 1)
	{
		if (s[i] != ' ' && s[i] != '\t')
			break;
		i++;
	}

	while(j >= 0)
	{
		if (s[j] != ' ' && s[j] != '\t')
			break;
		j--;
	}

	return (s.substr(i, j - i + 1));
}

std::string	get_valid_input(const std::string prompt)
{
	std::string value;

	value = "";
	while (trim_spaces(value).empty())
	{
		std::cout << prompt;
		std::getline(std::cin, value);
	}
	return (trim_spaces(value));
}

PhoneBook  Add_new_acc(PhoneBook p, int *i)
{
	std::string	Input[5];

	std::cout << "ADD NEW CONTACT\n";

	Input[0] = get_valid_input("Enter First Name: ");
	Input[1] = get_valid_input("Enter Last Name: ");
	Input[2] = get_valid_input("Enter Nickname: ");
	Input[3] = get_valid_input("Enter Phone Number: ");
	Input[4] = get_valid_input("Enter Dark Secret: ");

	p.insert(Input, *i);
	(*i)++;

	return (p);
}

void	print_menu()
{
	std::cout << std::endl;
	std::cout << "ADD    : Add new contact\n";
	std::cout << "SEARCH : List and search for an contact\n";
	std::cout << "EXIT   : Quit program\n\n";
}

int	main(void)
{
	int			i;
	int			d;
	PhoneBook	p;
	std::string	choice;
	std::string	search;

	i = 0;
	d = 0;
	choice = "";

	std::cout << "----------CONTACT LIST----------\n";

	while (1)
	{
		print_menu();

		std::cout << "Choose and option : ";
		std::getline(std::cin, choice);
		std::cout << std::endl;

		if (choice.compare("ADD") == 0)
		{
			p = Add_new_acc(p, &i);
			if (i == SIZE)
				i = 0;
			if (d < SIZE)
				d++;
		}
		else if (choice.compare("SEARCH") == 0)
		{
			p.display(d);

			std::cout << "Enter Index of Contact: ";
			std::getline(std::cin, search);

			try
			{
				if (std::stoi(search) < d && std::stoi(search) > -1)
				{
					p.search(std::stoi(search));
				}
				else
					std::cout << "Invalid index!\n";
			}
			catch (std::invalid_argument)
			{
				std::cout << "Invalid index!\n";
			}

		}
		else if (choice.compare("EXIT") == 0)
		{
			std::cout << "END\n";
			break;
		}
		else
		{
			std::cout << ">>Enter a valid option<<\n";
		}

	}
	return (0);
}
