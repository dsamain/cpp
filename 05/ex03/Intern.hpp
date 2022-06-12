#pragma once

#include <iostream>
#include <string.h>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	virtual ~Intern();

	Form *makeForm(const std::string &form_type, const std::string &form_target);

private:
};

  
