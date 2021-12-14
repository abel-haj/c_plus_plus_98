#include <iostream>
#include <iomanip>

std::string	trunc(std::string str) {
	if ( str.length() > 9 )
		return str.substr(0, 10) + '.';
	else
		return str.substr(0, 10);
}

int	main(int ac, char **av)
{
	if ( ac > 1 ) {
		for (int i = 1; av[i] ; i++)
		{
			std::cout << std::setw(10) << trunc(av[i]) << std::endl;
		}
	}
	return (0);
}
