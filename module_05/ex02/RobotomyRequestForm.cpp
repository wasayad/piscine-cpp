#include "RobotomyRequestForm.hpp"

#include <fstream>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string const& target): Form("RobotomyRequestForm", 72, 45), Target(target){
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy): Form(copy), Target(copy.Target)
{
    (void)copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
    setSigned(copy.getSigned());
    return *this;
}

void                        RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    int iSecret = rand() % 2;
    if (getSigned() == 0)
        std::cout << getName() << " is not signed yet.\n";
    else if (getGrade() < executor.getGrade())
        std::cout << executor.getName() << " can\'t execute this form cause his grade is to low\n";
    else
    {
        if (iSecret == 0)
        std::cout<< "Vvvvv..Vvvvv..\n";
        else if (iSecret == 1)
            std::cout << Target << " has been robotomized\n";
    }
    
}