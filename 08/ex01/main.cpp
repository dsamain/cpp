#include <vector>
#include "Span.hpp"

void print(const Span &span){

	std::cout << "Span : "; 
	span.print();
	std::cout << "shortest : " << span.shortestSpan() << std::endl;
	std::cout << "longest : " << span.longestSpan() << std::endl;
	std::cout << std::endl;
}

int main() {

	std::cout << "	* Error test *" << std::endl;

	try { // don't work
		Span span(0);
		span.addNumber(12);
	} catch (Span::NoSpaceException &e) {
		std::cout << "Error : " << e.what() << std::endl;
	} 
	try { // work
		Span span(1);
		span.addNumber(12);
	} catch (Span::NoSpaceException &e) {
		std::cout << "Error : " << e.what() << std::endl;
	} 
	try { // don't work
		Span span(1);
		span.addNumber(12);
		span.addNumber(12);
	} catch (Span::NoSpaceException &e) {
		std::cout << "Error : " << e.what() << std::endl;
	} try {
		
		Span span(1);
		span.addNumber(12);
		span.shortestSpan(); // don't work
	} catch (Span::IsEmptyException &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	
	std::cout << "\n	* Regular test *" << std::endl;

	{
		Span span(2);
		span.addNumber(-42);
		span.addNumber(42);
		print(span);
	}
	{
		std::vector<int> v(10);
		for (unsigned int i = 0; i < v.size(); i++) v[i] = i;
		Span span(10);
		span.addNumber(v.begin(), v.end());
		print(span);
	}
	{
		std::vector<int> v(100000);
		for (unsigned int i = 0; i < v.size(); i++) v[i] = i*2;
		Span span(100000);
		span.addNumber(v.begin(), v.end());
		print(span);
	}

}