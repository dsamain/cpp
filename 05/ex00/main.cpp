#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat t("", 151);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat t("", 0);
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Bureaucrat t("", 15);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	
	Bureaucrat a("bob", 149);
	while (1) {
		std::cout << a << std::endl;
		try {
			a.incr();
		}
		catch (Bureaucrat::GradeTooLowException &e) {
			std::cout << e.what() << std::endl;
			break;
		}
	}

	Bureaucrat b("bob", 3);
	while (1) {
		std::cout << b << std::endl;
		try {
			b.decr();
		}
		catch (Bureaucrat::GradeTooHighException &e) {
			std::cout << e.what() << std::endl;
			break;
		}
	}
}