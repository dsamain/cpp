#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>
# include "Contact.hpp"

class PhoneBook { 
public:
	PhoneBook();
	PhoneBook(const Contact&);
	~PhoneBook();
	PhoneBook &operator=(const PhoneBook& op);

	void add();
	void search();
	void exit();

private:
	Contact contacts[8];
	int idx;



};

  


#endif