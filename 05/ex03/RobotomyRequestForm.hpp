#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(const std::string &target);
	virtual ~RobotomyRequestForm();
	void execute(const Bureaucrat &executor) const throw(F_EXCEPT);

private:

};

  
