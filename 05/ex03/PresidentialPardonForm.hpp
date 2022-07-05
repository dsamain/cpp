#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);

	void execute(const Bureaucrat &executor) const throw(F_EXCEPT);

private:

};

  
