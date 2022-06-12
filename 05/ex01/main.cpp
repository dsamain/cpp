#include "Bureaucrat.hpp"

int main() {

	try {
		Form t("", 151);
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form t("", 0);
	} catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form t("", 15);
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	} catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat a("bab", 140);
	Bureaucrat b("bob", 1);
	Form f("f", 130);
	try {
		f.beSigned(a);
	} catch(Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << f << std::endl;
	try {
		f.beSigned(b);
	} catch(Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << f << std::endl;

}