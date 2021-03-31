#include "PresidentialPardonForm.hpp"

#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string const& target): Form("PresidentialPardonForm", 25, 5), Target(target){
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy): Form(copy), Target(copy.Target)
{
    (void)copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
    setSigned(copy.getSigned());
    return *this;
}

void                        PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (getSigned() == 0)
        std::cout << getName() << " is not signed yet.\n";
    else if (getGrade() < executor.getGrade())
        std::cout << executor.getName() << " can\'t execute this form cause his grade is to low\n";
    else
    {
        std::cout<< Target << " has been forgiven by Zafod Beeblebrox\n";
    }
}