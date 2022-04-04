#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main( void ) {

	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;
		std::cout << "----------" << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
		std::cout << "----------" << std::endl;

		while (s.size() > 0)
		{
			std::cout << s.top() << std::endl;
			s.pop();
		}
	}

	std::cout << "----------" << std::endl;
	std::cout << "----------" << std::endl;

	{
		MutantStack<std::string>ms;
		MutantStack<std::string>::iterator it;

		ms.push("one");
		ms.push("two");
		ms.push("three");
		ms.push("four");

		for ( it = ms.begin(); it < ms.end(); it++ )
		{
			std::cout << *it << std::endl;
		}

		std::cout << "----------" << std::endl;

		it--;
		while ( it >= ms.begin() )
		{
			std::cout << *it << std::endl;
			it--;
		}

		std::cout << "----------" << std::endl;

		MutantStack<std::string>ms2;
		ms2.push("five");
		ms2.push("six");
		ms2 = ms;
		for ( it = ms2.begin(); it < ms2.end(); it++ )
		{
			std::cout << *it << std::endl;
		}
	}

	return 0;
}