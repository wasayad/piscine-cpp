#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>



class Form;

class Bureaucrat 
{
    private:
        std::string const name;
        unsigned int     grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string const& Name, unsigned int Grade);
        Bureaucrat(const Bureaucrat & copy);
        Bureaucrat & operator=(const Bureaucrat & op);
        ~Bureaucrat();
        std::string  getName() const;
        unsigned int  getGrade() const;
        void                promote();
        void                demote();
        void                signForm(Form &target);
        void                executeForm(Form const &target);
        class GradeTooLowExceptions : public std::exception{
            public:
                virtual const char * what() const throw()
                {
                    return ("Grade to low");
                }
        };
        class GradeTooHighExceptions : public std::exception{
            public:
                virtual const char * what() const throw()
                {
                    return ("Grade to high");
                }
        };
};

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f);
# include "Form.hpp"
#endif