#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string const& target);
        ShrubberyCreationForm(const ShrubberyCreationForm & copy);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & op);
        virtual ~ShrubberyCreationForm();
        virtual void        execute(Bureaucrat const& executor) const;
    private:
        ShrubberyCreationForm();
        std::string const Target;
};



#endif