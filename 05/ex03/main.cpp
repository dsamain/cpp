#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
	srand(time(NULL));
	PresidentialPardonForm pf("garry");
	Bureaucrat b("bab", 1);

	Form *fa, *fb, *fc;
	Intern intern;

	std::string type[] = {"shrubbery request", "robotomy request", "presidential request"};
	fa = intern.makeForm(" ", " ");
	fa = intern.makeForm("presidential request", "bob");
	fb = intern.makeForm("robotomy request", "bob");
	fc = intern.makeForm("shrubbery request", "forest");

	fa->beSigned(b);
	fa->execute(b);
	fb->beSigned(b);
	fb->execute(b);
	fc->beSigned(b);
	fc->execute(b);

	delete fa;
	delete fb;
	delete fc;
}