#pragma once

# include <algorithm>

template < typename T >
typename T::iterator easyfind( T t, int n ) {

	typename T::iterator it;

	it = std::find(t.begin(), t.end(), n);

	if (it == t.end()) {

		throw ( "Could not found element!" );
	}
	return it;
}
