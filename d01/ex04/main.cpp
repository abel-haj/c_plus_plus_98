#include <iostream>
#include <fstream>

std::string	find_n_replace( std::string line, std::string s1, std::string s2 ) {

	size_t		start, index, len;
	std::string	newline;

	start = index = len = 0;
	while ( line.find(s1) != std::string::npos ) {

		index = line.find(s1);
		len = s1.length();
		// cut from start to index
		newline = line.substr(0, index);
		// concat new value
		newline.append(s2);
		// add whats left
		newline.append(line.substr(index + len));
		line = newline;
	}

	return ( line );
}

int	main(/* int ac, char **av */) {

	std::string		s1, s2, filename, newfilename, line;
	std::ifstream	ifs;
	std::ofstream	ofs;

	std::cout << "Enter file : ";
	std::cin >> filename;
	newfilename = filename + ".replace";

	std::cout << "Enter first string : ";
	std::cin >> s1;

	std::cout << "Enter second string : ";
	std::cin >> s2;

	ifs.open(filename);

	if ( ifs ) {

		ofs.open(newfilename);

		while ( ifs.good() ) {

			std::getline(ifs, line);
			std::cout << line << std::endl;

			// std::cout << s1 + " " + s2 << std::endl;
			// std::cout << find_n_replace( line, s1, s2 ) << std::endl;
			ofs << find_n_replace( line, s1, s2 );
			ofs << std::endl;
		}

		ofs.close();
	}
	else {

		std::cout << "Invalid filename" << std::endl;
	}

	return ( 0 );
}