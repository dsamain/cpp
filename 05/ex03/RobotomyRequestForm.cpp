#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45, target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy) {}

RobotomyRequestForm::~RobotomyRequestForm() {
}  

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy) {
	Form::operator=(cpy);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const throw(F_EXCEPT) {
	executor.executeForm(*this);
	try {
		isExecutable(executor);
	} catch (Form::NonSignedException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} 
	std::cout << "*bzzzzzzz* ";
	if (rand()%2)
		std::cout << _target << " has been robotized\n"; 
	else
		std::cout << _target << " has not been robotized\n"; 
}

