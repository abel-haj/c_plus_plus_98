#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# define SIZE 8

class PhoneBook
{
	private:
		Contact contact[SIZE];

	public:
		void	insert( std::string info[5], int i );
		void	display( int i );
		void	search( int index );
};

#endif
