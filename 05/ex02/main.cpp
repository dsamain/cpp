#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	srand(time(NULL));
	PresidentialPardonForm pf("garry");
	Bureaucrat a("bab", 150);
	Bureaucrat b("bob", 1);

	pf.execute(b);
	pf.beSigned(b);
	pf.execute(a);
	pf.execute(b);

	std::cout << "-------------------------\n";

	RobotomyRequestForm rf("zob");
	rf.execute(b);
	rf.beSigned(b);
	rf.execute(a);
	rf.execute(b);
	rf.execute(b);
	rf.execute(b);
	rf.execute(b);

	std::cout << "-------------------------\n";

	ShrubberyCreationForm sf("forest");
	sf.execute(b);
	sf.beSigned(b);
	sf.execute(a);
	sf.execute(b);

}