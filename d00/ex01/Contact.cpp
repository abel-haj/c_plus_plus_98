#include "Contact.hpp"

std::string	Contact::getFirstName( void ) {

	return ( this->_firstName );
}

void		Contact::setFirstName( std::string first ) {

	this->_firstName = first;
}

std::string	Contact::getLastName( void ) {

	return ( this->_lastName );
}

void		Contact::setLastName( std::string last ) {

	this->_lastName = last;
}

std::string	Contact::getNickName( void ) {

	return ( this->_nickName );
}

void		Contact::setNickName( std::string nick ) {

	this->_nickName = nick;
}

std::string	Contact::getPhone( void ) {

	return ( this->_phone );
}

void		Contact::setPhone( std::string phone ) {

	this->_phone = phone;
}

std::string	Contact::getDarkSecret( void ) {

	return ( this->_darkSecret );
}

void		Contact::setDarkSectet( std::string secret ) {

	this->_darkSecret = secret;
}
