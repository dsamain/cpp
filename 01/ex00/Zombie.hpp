#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>

class Zombie { 
public:
	//Zombie();
	Zombie(std::string s);
	//~Zombie();
	Zombie(const Zombie&);
	virtual ~Zombie();
	Zombie &operator=(const Zombie& op);

	void annonce();

private:
	std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

  


#endif