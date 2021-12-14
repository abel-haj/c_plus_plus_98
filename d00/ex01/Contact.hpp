#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phone;
		std::string	_darkSecret;

	public:
		std::string	getFirstName( void );
		void		setFirstName( std::string first );

		std::string	getLastName( void );
		void		setLastName( std::string last );

		std::string	getNickName( void );
		void		setNickName( std::string nick );

		std::string	getPhone( void );
		void		setPhone( std::string phone );

		std::string	getDarkSecret( void );
		void		setDarkSectet( std::string secret );

};

#endif
