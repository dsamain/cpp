#pragma once

#include <iostream>
#include <string.h>

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
	int getGrade();
	void incr() throw(GRADE_EXCEPT);
	void decr() throw(GRADE_EXCEPT);

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
	int _grade;

};

  
