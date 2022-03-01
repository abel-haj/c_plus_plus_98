#include <iostream>
#include <fstream>

/*
 * This function replaces s1 occurances in line with s2
 */
std::string	find_n_replace( std::string line, std::string s1, std::string s2 ) {

	size_t		start, index;
	std::string	newline, left;

	start = index = 0;
	left = line;
	while ( left.find( s1 ) != std::string::npos ) {

		index = left.find( s1 );
		newline = left.substr(start, index);
		newline.append(s2);
		left = left.substr(index + s1.length());
		start = index + s1.length();
	}

	newline.append( left );

	return ( newline );
}

int	main( int ac, char **av ) {

	std::string		s1, s2, filename, newfilename, line;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if ( ac == 4 ) {

		filename = av[1];
		s1 = av[2];
		s2 = av[3];

		ifs.open(filename);

		if ( ifs ) {

			newfilename = filename + ".replace";
			ofs.open(newfilename);

			while ( ifs.good() && std::getline(ifs, line) ) {

				ofs << find_n_replace( line, s1, s2 );
				if ( !ifs.eof() )
					ofs << std::endl;
			}

			ofs.close();
		}
		else {

			std::cout << "Invalid filename" << std::endl;
		}

	}
	else {

		std::cout << "Invalid number of arguments" << std::endl;
	}

	return ( 0 );
}