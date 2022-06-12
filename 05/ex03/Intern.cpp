#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern &cpy) {}

Intern &Intern::operator=(const Intern &cpy) {
	return *this;
}

Intern::~Intern() {} 

Form *makeShrubbery(const std::string &target) {
	return new ShrubberyCreationForm(target);
}
Form *makePresident(const std::string &target) {
	return new PresidentialPardonForm(target);
}
Form *makeRobotomy(const std::string &target) {
	return new RobotomyRequestForm(target);
}

//Form *makeForm(const std::string &form_type, const std::string &form_target);
Form *Intern::makeForm(const std::string &form_type, const std::string &form_target) {
	std::string type[] = {"shrubbery request", "robotomy request", "presidential request"};
	Form *(*function [])(const std::string &) = {makeShrubbery, makeRobotomy, makePresident};

	for (int i = 0; i < 3; i++)
		if (form_type == type[i])
			return (function[i](form_target));
	std::cout << "Invalid form type" << std::endl;
	return NULL;
}