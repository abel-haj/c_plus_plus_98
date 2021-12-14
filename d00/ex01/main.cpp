#include <iostream>
#include "PhoneBook.hpp"
// using namespace std;

void	print_menu()
{
	std::cout << std::endl << "ADD    : Add new contact\n";
	std::cout << "SEARCH : List and search for an contact\n";
	std::cout << "EXIT   : Quit program\n\n";
}

PhoneBook  Add_new_acc(PhoneBook p, int *i)
{
	std::string	Input[5];

	std::cout << "ADD NEW CONTACT\n";

	std::cout << "Enter First Name: ";
	std::getline(std::cin, Input[0]);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, Input[1]);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, Input[2]);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, Input[3]);

	std::cout << "Enter Dark Secret: ";
	std::getline(std::cin, Input[4]);

	p.insert(Input, *i);
	(*i)++;

	return (p);
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

			try {

				if (std::stoi(search) < d)
				{
					p.search(std::stoi(search));
				}
				else
					std::cout << "Invalid index!\n";
			} catch (std::invalid_argument) {

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
