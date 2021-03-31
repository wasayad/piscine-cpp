# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const&Name, unsigned int Grade) : name(Name), grade(Grade)
{
    if (Grade < 1)
        throw Bureaucrat::GradeTooHighExceptions();
    else if (Grade > 150)
        throw Bureaucrat::GradeTooLowExceptions();    
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : name(copy.name)
{
    *this = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy)
{
    this->grade = copy.grade;
    return (*this);
}

unsigned int Bureaucrat::getGrade() const
{
    return (grade);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

void            Bureaucrat::promote()
{
    if ((grade - 1) > 1)
    {
        grade -= 1;
    }
    else
    {
        throw Bureaucrat::GradeTooHighExceptions();
    }
}

void            Bureaucrat::demote()
{
        if ((grade + 1) < 150)
        {
            grade += 1;
        }
        else
            throw Bureaucrat::GradeTooLowExceptions(); 
}

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f)
{
    os << "<" << f.getName() << ">, bureaucrat grade <" << f.getGrade()<<">\n";
    return (os);
}