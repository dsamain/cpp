#pragma once

#include <iostream>
#include <string.h>
class Form;
#include "Form.hpp"

#define GRADE_EXCEPT Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade) throw(GRADE_EXCEPT);
	Bureaucrat(const Bureaucrat &);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &);
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

	const std::string &getName();
	int getGrade() const;
	void incr() throw(GRADE_EXCEPT);
	void decr() throw(GRADE_EXCEPT);
	void signForm(const Form &f) const;

	class GradeTooHighException : public std::exception {
	public:
		using std::exception::what;
		const char *what();
	};

	class GradeTooLowException : public std::exception {
	public:
		using std::exception::what;
		const char *what();
	};

private:
	const std::string _name;
	int _grade;

};

  
