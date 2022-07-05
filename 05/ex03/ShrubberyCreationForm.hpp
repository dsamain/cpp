#pragma once

#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	void execute(const Bureaucrat &executor) const throw(F_EXCEPT);

private:

};

  
