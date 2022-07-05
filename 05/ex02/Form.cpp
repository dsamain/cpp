#include <random>
#include "Form.hpp"

Form::Form(const std::string &name, int required, int execRequired, const std::string &target) throw(F_EXCEPT) 
: _name(name), _target(target), _required(required), _execRequired(execRequired), _signed(0) {
	if (required <= 0 || execRequired <= 0)
		throw Form::GradeTooHighException();
	if (required > 150 || execRequired > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cpy) : _name(cpy._name), _target(cpy._target), _required(cpy._required), _execRequired(cpy._execRequired), _signed(cpy._signed) {
}

Form::~Form() {
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

bool Form::isSigned() const {
	return _signed;
}

const char *Form::GradeTooHighException::what() {
	return "Grade to high exception";
}

const char *Form::GradeTooLowException::what() {
	return "Grade to low exception";
}

const char *Form::NonSignedException::what() {
	return "Form is not signed exception";
}

void Form::beSigned(const Bureaucrat &b) throw(F_EXCEPT) {
	b.signForm(*this);
	if (b.getGrade() > _required)
		throw Form::GradeTooLowException();
	_signed = 1;
}

void Form::isExecutable(const Bureaucrat &executor) const throw(F_EXCEPT) {
	if (!_signed)
		throw NonSignedException();
	if (_execRequired < executor.getGrade())
		throw GradeTooLowException();
}
