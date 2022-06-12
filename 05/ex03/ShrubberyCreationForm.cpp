#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 72, 45, target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}  

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const throw(F_EXCEPT) {
	executor.executeForm(*this);
	try {
		isExecutable(executor);
	} catch (Form::NonSignedException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		return ;
	} 
	std::ofstream fout;
	fout.exceptions(std::ofstream::badbit | std::ofstream::failbit);
	try  {
		fout.open(_target, std::ofstream::app);
	} catch (std::ofstream::failure &e) {
		std::cout << "Error while opening " << _target << std::endl;
		return ;
	}
	try {
		fout << "\n          &&& &&  & &&\n"
	   	 << "      && &\\/&\\|& ()|/ @, &&\n"
	 	 << "      &\\/(/&/&||/& /_/)_&/_&\n"
	 	 << "   &() &\\/&|()|/&\\/ '% & ()\n"
	 	 << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
	 	 << "&&   && & &| &| /& & % ()& /&&\n"
	 	 << " ()&_---()&\\&\\|&&-&&--%---()~\n"
	 	 << "     &&     \\|||\n"
	 	 << "             |||\n"
	 	 << "             |||\n"
	 	 << "             |||\n"
	 	 << "       , -=-~  .-^- _;\n\n";
	} 
	catch (std::ofstream::failure &e) {
		std::cout << "Error while writing in " << _target << std::endl;
	} 
		  
}

