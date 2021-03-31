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
        {
            throw Bureaucrat::GradeTooLowExceptions();
        } 
}

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f)
{
    os << "<" << f.getName() << ">, bureaucrat grade <" << f.getGrade()<<">\n";
    return (os);
}

void            Bureaucrat::signForm(Form &target)
{
    if (target.getSigned() == 1)
    {
        std::cout<< name << " cant sign "<< target.getName() << " because this form is already signed.\n";
    }
    else
    {
        if (target.getGrade() < grade)
            std::cout << getName() << " can\'t sign this form cause his grade is to low\n";
        else
        {
            target.setSigned(1);
            std::cout<< name << " signs " << target.getName()<< std::endl;  
        }         
    }
}

void            Bureaucrat::executeForm(Form const &target)
{
    if (target.getSigned() == 0)
    {
        std::cout<< name << " cant execute "<< target.getName() << " because this form is not signed.\n";
    }
    else
    {
        if (target.getGrade() < grade)
            std::cout << getName() << " can\'t execute this form cause his grade is to low\n";
        else
        {
            target.execute(*this);  
        }
    }
}