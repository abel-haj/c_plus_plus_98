#include "serialization.hpp"
#include <iostream>

int main ( void ) {

	{
		Data* before = new Data();
		uintptr_t raw;
		Data* after;

		before->a = 42;
		before->b = 24;
		before->c = -1;

		std::cout << "Before serialization: " << std::endl;
		std::cout << before->a << ", " << before->b << ", " << before->c << std::endl << std::endl;

		raw = serialize( before );
		std::cout << "Serialized number: " << raw << std::endl << std::endl;
		after = deserialize( raw );

		std::cout << "After serialization: " << std::endl;
		std::cout << after->a << ", " << after->b << ", " << after->c << std::endl << std::endl;

		if (
				before->a == after->a
				&&
				before->b == after->b
				&&
				before->c == after->c
			)
			std::cout << "All Good!" << std::endl;
		else
			std::cout << "Something went wrong!" << std::endl;

		delete before;
	}

}
