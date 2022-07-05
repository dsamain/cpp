#include "Span.hpp"

Span::Span(unsigned int n) : _max(n), _st() {}

Span::Span(const Span &cpy) : _max(cpy._max), _st(cpy._st) {}

Span::~Span() {}  

Span &Span::operator=(const Span &cpy) {
	_st = cpy._st;
	_max = cpy._max;
	return *this;
}

void Span::addNumber(int n) throw(Span::NoSpaceException) {
	if (_st.size() == _max) throw Span::NoSpaceException();
	_st.insert(n);
}

unsigned int Span::shortestSpan() const throw(Span::IsEmptyException) {
	if (_max < 2) throw Span::IsEmptyException();

	std::multiset<int>::iterator it = _st.begin();
	std::multiset<int>::iterator it2 = _st.begin();
	int ret = INF;
	while (++it2 != _st.end()) 
		ret = std::min(ret, *it2-*it++);

	return ret;
}

unsigned int Span::longestSpan() const throw(Span::IsEmptyException) {
	if (_max < 2) throw Span::IsEmptyException();

	std::multiset<int>::iterator it = _st.end();
	return (*(--it) - *_st.begin());
}

void Span::print() const {
	std::multiset<int>::iterator it = _st.begin();
	int cnt=0;
	while (it != _st.end() && cnt < 10)
		std::cout << *it++ << " ", cnt++;
	if (it != _st.end()) {
		std::cout << "... ";
		if (++it != _st.end())
			std::cout << *(--(it = _st.end()));

	}
	std::cout << std::endl;

}

const char *Span::NoSpaceException::what() {
	return "Span is full";
}

const char *Span::IsEmptyException::what() {
	return "To few numbers in span";
}