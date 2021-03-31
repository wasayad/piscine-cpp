#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & op);
        virtual ~RobotomyRequestForm();
        void        execute(Bureaucrat const& executor) const;
    private:
        RobotomyRequestForm();
        std::string const Target;
};



#endif