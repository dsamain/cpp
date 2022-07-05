#include <iostream>
#include <vector>
#include "MutantStack.hpp"

int main()
{
	std::cout << "MutantStack:\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		for (int i = 0; i < 5; i++) mstack.push(i); 
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
		while (!mstack.empty()) mstack.pop();
		it = mstack.begin();
		std::cout << (it == mstack.end()) << std::endl;
		std::stack<int> s(mstack);
	}
	std::cout << "\nvector:\n";
	{
		std::vector<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		for (int i = 0; i < 5; i++) mstack.push_back(i); 
		mstack.push_back(0);
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		while (!mstack.empty()) mstack.pop_back();
		it = mstack.begin();
		std::cout << (it == mstack.end()) << std::endl;

	}
}