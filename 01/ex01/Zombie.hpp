#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie { 
public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	Zombie(const Zombie&);

	void annonce();
	void set_name(std::string s);

private:
	std::string name;
};

Zombie *zombieHorde(int n, std::string name);

#endif