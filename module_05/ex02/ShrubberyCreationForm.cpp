#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target): Form("ShrubberyCreationForm", 145, 137), Target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy): Form(copy), Target(copy.Target)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
    setSigned(copy.getSigned());
    return *this;
}

void                        ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
        if (getSigned() == 0)
            std::cout << getName() << " is not signed yet.\n";
        else if (getGrade() < executor.getGrade())
            std::cout << executor.getName() << " can\'t execute this form cause his grade is to low\n";
        else
        {
            std::ofstream ofs;
            ofs.open(Target);
            ofs <<      "     .     .  .      +     .      .          .  \n"                           
                        "     .       .      .     #       .           .\n"
                        "        .      .         ###            .      .\n"
                        "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
                        "          .      . \"####\"###\"####\"  .\n"
                        "       .     \"#:.    .:#\"###\"#:.    .:#\"  .     \n" 
                        "  .             \"#########\"#########\"        .  \n"
                        "        .    \"#:.  \"####\"###\"####\"  .:#\"   .   \n"
                        "     .     .  \"#######\"\"##\"##\"\"#######\"        \n"
                        "                .\"##\"#####\"#####\"##\"           .\n"
                        "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"   \n"  
                        "      .     \"#######\"##\"#####\"##\"#######\"      .\n"    
                        "    .    .     \"#####\"\"#######\"\"#####\"    .     \n" 
                        "            .     \"      000      \"    .     .\n"
                        "       .         .   .   000     .        .     \n"  
                        ".. .. ..................O000O...................\n";
        }
}