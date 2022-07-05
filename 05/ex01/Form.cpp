#include "Form.hpp"

Form::Form(const std::string &name, int required, int exec_required) throw(F_GRADE_EXCEPT) : _name(name), _required(required), _exec_required(exec_required), _signed(0) {
	if (required <= 0 || exec_required <= 0)
		throw Form::GradeTooHighException();
	if (required > 150 || exec_required > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cpy) : _name(cpy._name), _required(cpy._required), _exec_required(cpy._exec_required), _signed(cpy._signed) {
}

Form::~Form() {
	//std::cout << "Bureactrat destructor called" << std::endl;
}  

Form &Form::operator=(const Form &cpy) {
	_signed = cpy._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &f) {
	os << "Form " << f._name << '[' << (f._signed ? 'X' : ' ') << "] (required grade : " << f._required << ')';
	return os;
}

const std::string &Form::getName() const {
	return _name;
}

int Form::getRequired() const {
	return _required;
}


const char *Form::GradeTooHighException::what() {
	return "Grade to high exception";
}

const char *Form::GradeTooLowException::what() {
	return "Grade to low exception";
}

void Form::beSigned(const Bureaucrat &b) throw(F_GRADE_EXCEPT) {
	b.signForm(*this);
	if (b.getGrade() > _required)
		throw Form::GradeTooLowException();
	_signed = 1;
}