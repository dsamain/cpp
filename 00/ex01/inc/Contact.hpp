#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact { 
public:
	Contact();
	Contact(const Contact&);
	virtual ~Contact();
	Contact &operator=(const Contact& op);

	void assign(std::string new_info[5]);
	void print_base_info(int idx);
	void print_info();
	bool is_set();

private:
	bool set;
	std::string info[5];
};

#endif