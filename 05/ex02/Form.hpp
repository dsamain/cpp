#pragma once

class Bureaucrat;
#include "Bureaucrat.hpp"

#define F_EXCEPT Form::GradeTooHighException, Form::GradeTooLowException, Form::NonSignedException

class Form {
public:
	Form();
	Form(const std::string &name, int required, int execRequired, const std::string &target) throw(F_EXCEPT);
	Form(const Form &);
	virtual ~Form();

	Form &operator=(const Form &);
	friend std::ostream &operator<<(std::ostream &os, const Form &b);

	const std::string &getName() const;
	int getRequired() const;
	bool isSigned() const;
	void beSigned(const Bureaucrat &b) throw(F_EXCEPT);
	void isExecutable(const Bureaucrat &executor) const throw(F_EXCEPT);
	virtual void execute(const Bureaucrat &executor) const throw(F_EXCEPT) =0;

	class GradeTooHighException : public std::exception {
	public:
		using std::exception::what;
		virtual const char *what();
	};

	class GradeTooLowException : public std::exception {
	public:
		using std::exception::what;
		virtual const char *what();
	};

	class NonSignedException : public std::exception {
	public:
		using std::exception::what;
		virtual const char *what();
	};

protected:
	const std::string _name;
	const std::string _target;
	const int _required;
	const int _execRequired;

	bool _signed;

};

  
