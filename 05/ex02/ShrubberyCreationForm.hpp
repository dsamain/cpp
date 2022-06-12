#pragma once

#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string &target);
	virtual ~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor) const throw(F_EXCEPT);

private:

};

  
