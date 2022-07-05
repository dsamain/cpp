#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy) {}

PresidentialPardonForm::~PresidentialPardonForm() {} 

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy) {
	Form::operator=(cpy);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const throw(F_EXCEPT) {
	executor.executeForm(*this);
	try {
		isExecutable(executor);
	}
	catch (Form::NonSignedException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} 
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}

