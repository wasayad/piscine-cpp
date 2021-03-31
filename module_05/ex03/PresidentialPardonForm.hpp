#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string const& target);
        PresidentialPardonForm(const PresidentialPardonForm & copy);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & op);
        virtual ~PresidentialPardonForm();
        void        execute(Bureaucrat const& executor) const;
    private:
        PresidentialPardonForm();
        std::string const Target;
};



#endif