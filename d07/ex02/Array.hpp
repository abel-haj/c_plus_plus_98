#pragma once

#include <exception>

template < typename T >
class Array {

	private:
		T *				_actualArray;
		unsigned int	_size;

	public:
		/* Default Constructor */
		Array <T> ( void ) {

			_size = 0;
			_actualArray = new T [0];
		}

		Array <T> ( unsigned int size ) {

			_size = size;
			_actualArray = new T [_size];

			for ( unsigned int i = 0; i < size; i++ ) {

				_actualArray[i] = 0;
			}
		}

		/* Copy Constructor */
		Array <T> ( const Array & src ) {

			this->_size = src.size();
			this->_actualArray = new T [this->_size];
			for ( unsigned int i = 0; i < this->_size; i++ ) {

				this->_actualArray[i] = src[i];
			}
		}

		/* Destructor */
		~Array <T> ( void ) {

			delete [] _actualArray;
		}

		/* Assignment Operator Overload */
		Array <T> &			operator = ( const Array & rhs ) {

			delete [] _actualArray;

			this->_size = rhs.size();
			this->_actualArray = new T [this->_size];
			for ( unsigned int i = 0; i < this->_size; i++ ) {

				this->_actualArray[i] = rhs[i];
			}

			return *this;
		}

		/* Subscript Operator Overload (Read) */
		T				operator [] ( unsigned int index ) const {

			if ( index >= _size || index < 0 ) {

				throw Array::IndexOutOfBoundsException();
			}
			return this->_actualArray[index];
		}

		/* Subscript Operator Overload (Write) */
		T &				operator [] ( unsigned int index ) {

			if ( index >= _size || index < 0 ) {

				throw Array::IndexOutOfBoundsException();
			}
			return this->_actualArray[index];
		}

		unsigned int	size( void ) const {

			return this->_size;
		}

		class IndexOutOfBoundsException : public std::exception {

			public:
				const char * what () const throw () {

					return "Index out of bounds";
				}
		};
};
