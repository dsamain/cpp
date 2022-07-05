#pragma once

#include <iostream>
#include <algorithm>
#include <set>

#define INF 2147483647

class Span {
public:
	Span(unsigned int n);
	Span(const Span &);
	virtual ~Span();
	Span &operator=(const Span &);

	class NoSpaceException : public std::exception {
	public:
		using std::exception::what;
		virtual const char *what();
	};
	
	class IsEmptyException : public std::exception {
	public:
		using std::exception::what;
		virtual const char *what();
	};

	unsigned int shortestSpan() const throw(Span::IsEmptyException);
	unsigned int longestSpan() const throw(Span::IsEmptyException);

	void addNumber(int n) throw(Span::NoSpaceException);

	template<typename It>
	void addNumber(It it1, It it2) throw(Span::NoSpaceException)
	{
		while (it1 != it2) {
			if (_st.size() == _max) throw Span::NoSpaceException();
			_st.insert(*it1++);
		}
	}

	void print() const;

private:
	unsigned int _max;
	std::multiset<int> _st;

};

  
