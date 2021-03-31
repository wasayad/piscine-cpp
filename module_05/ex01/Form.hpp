#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form 
{
    private:
        std::string const     name;
        bool _signed;
        const unsigned int          grade;
        const unsigned int          executionGrade;
        Form();
    public:
        Form(std::string const& Name, unsigned int Grade);
        Form(const Form & copy);
        Form & operator=(const Form & op);
        ~Form();
        void    beSigned(Bureaucrat const& target);
        std::string        getName()const;
        unsigned int       getGrade()const;
        bool               getSigned()const;
        void               setSigned(bool x);
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

std::ostream&      operator<<(std::ostream& os, Form const& f);

# include "Bureaucrat.hpp"

#endif