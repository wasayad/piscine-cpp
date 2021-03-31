#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    srand (time(NULL));
    try
    {
        Bureaucrat tmp("tulipe", 1);
        Bureaucrat tmp1("tups", 125);
        ShrubberyCreationForm form("asciiart");
        RobotomyRequestForm form1("testing");
        PresidentialPardonForm form2("yessir");
        tmp1.signForm(form);
        tmp.signForm(form);
        tmp1.executeForm(form);
        tmp.executeForm(form);
        tmp.executeForm(form);
        tmp1.signForm(form1);
        tmp.signForm(form1);
        tmp1.executeForm(form1);
        tmp.executeForm(form1);
        tmp.executeForm(form1);
        tmp1.signForm(form2);
        tmp.signForm(form2);
        tmp1.executeForm(form2);
        tmp.executeForm(form2);
        tmp.executeForm(form2);
    }
    catch(const Bureaucrat::GradeTooLowExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (1);
    }catch(const Bureaucrat::GradeTooHighExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (1);
    }
    catch(const Form::GradeTooLowExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (1);
    }
    catch(const Form::GradeTooHighExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (1);
    }  
}