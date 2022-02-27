#include "PhoneBook.hpp"
#include <iomanip>

std::string	trunc(std::string str) {
	if ( str.length() > 9 )
		return str.substr(0, 9) + '.';
	else
		return str;
}

void	PhoneBook::insert( std::string info[5], int i ) {

	this->contact[i].setFirstName(info[0]);
	this->contact[i].setLastName(info[1]);
	this->contact[i].setNickName(info[2]);
	this->contact[i].setPhone(info[3]);
	this->contact[i].setDarkSectet(info[4]);
}

void	PhoneBook::display( int ind ) {

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << "\n";
	for(int i = 0; i < ind; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << trunc(this->contact[i].getFirstName()) << "|";
		std::cout << std::setw(10) << trunc(this->contact[i].getLastName()) << "|";
		std::cout << std::setw(10) << trunc(this->contact[i].getNickName()) << "|" << "\n";
	}
}

void	PhoneBook::search( int index ) {

	std::cout << "Index" << " : " << index << "\n";
	std::cout << "First Name" << " : " << PhoneBook::contact[index].getFirstName() << "\n";
	std::cout << "Last Name" << " : " << PhoneBook::contact[index].getLastName() << "\n";
	std::cout << "Phone" << " : " << PhoneBook::contact[index].getPhone() << "\n";
	std::cout << "Dark Secret" << " : " << PhoneBook::contact[index].getDarkSecret() << "\n";
	std::cout << "\n";
}
