#pragma once

class Bureaucrat;
#include "Bureaucrat.hpp"

#define F_GRADE_EXCEPT Form::GradeTooHighException, Form::GradeTooLowException


class Form {
public:
	Form();
	Form(const std::string &name, int required) throw(F_GRADE_EXCEPT);
	Form(const Form &);
	virtual ~Form();

	Form &operator=(const Form &);
	friend std::ostream &operator<<(std::ostream &os, const Form &b);

	const std::string &getName() const;
	const int getRequired() const;
	void beSigned(const Bureaucrat &b) throw(F_GRADE_EXCEPT);

	class GradeTooHighException : public std::exception {
	public:
		const char *what();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char *what();
	};

private:
	const std::string _name;
	const int _required;
	bool _signed;

};

  
