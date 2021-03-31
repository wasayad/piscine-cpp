#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern & copy){*this = copy;}

Intern & Intern::operator=(const Intern & op){
    (void)op;
    return *this;
}

Form				*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}
Form				*makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}
Form				*makePardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*     Intern::makeForm(std::string const& form, std::string const& target)
{
    std::string formnames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(*make[3])(std::string)= { makeShrubbery, makeRobotomy, makePardon};
	for (int i = 0; i < 3; i++)
	{
		if (formnames[i].compare(form) == 0)
		{
			std::cout << "Intern creates " << formnames[i] << std::endl;
			return make[i](target);
		}
	}
    std::cout<<"Could not be created returning a presidential form\n";
	return (make[0](target));
}