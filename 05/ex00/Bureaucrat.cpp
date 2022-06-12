#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) throw(GRADE_EXCEPT) : _name(name) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
	//_name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _grade(cpy._grade) {
}

Bureaucrat::~Bureaucrat() {
	//std::cout << "Bureactrat destructor called" << std::endl;
}  

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy) {
	_grade = cpy._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {
	os << b._name << ", bureaucrat grade " << b._grade << ".";
	return os;
}

const std::string &Bureaucrat::getName() {
	return _name;
}

int Bureaucrat::getGrade() {
	return _grade;
}

void Bureaucrat::incr() throw(GRADE_EXCEPT) {
	if (_grade == 150) 
		throw Bureaucrat::GradeTooLowException();
	_grade++;

}
void Bureaucrat::decr() throw(GRADE_EXCEPT) {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

const char *Bureaucrat::GradeTooHighException::what() {
	return "Grade to high exception";
}

const char *Bureaucrat::GradeTooLowException::what() {
	return "Grade to low exception";
}