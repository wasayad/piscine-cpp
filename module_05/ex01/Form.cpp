#include "Form.hpp"

Form::Form(std::string const& Name, unsigned int Grade): name(Name), _signed(0), grade(Grade), executionGrade(0)
{
        if (Grade < 1)
            throw Form::GradeTooHighExceptions();
        else if (Grade > 150)
            throw Form::GradeTooLowExceptions();
}

Form::~Form()
{
}

Form::Form(const Form & copy): name(copy.name), grade(copy.getGrade()), executionGrade(0)
{
    *this = copy;
}

Form & Form::operator=(const Form & copy){
    this->_signed = copy._signed;
    return *this;
}

void       Form::beSigned(Bureaucrat const& target)
{
    if (_signed == 1)
    {
        std::cout<<"This form is alreay signed.\n";
    }
    else
    {
        if (target.getGrade() > grade)
            throw Form::GradeTooLowExceptions();
        else
        {
            std::cout<<target.getName()<< " signed form "<< name<< std::endl;
            _signed = 1;       
        }   
    }
}

bool        Form::getSigned() const
{
    return (_signed);
}

unsigned int  Form::getGrade() const
{
    return (grade);
}

std::string  Form::getName() const 
{
    return (name);
}

std::ostream&      operator<<(std::ostream& os, Form const& f)
{
    os <<"Form name : "<< f.getName() << " Form grade required : "<< f.getGrade()<< " Form is signed : "<< f.getSigned()<< std::endl;
    return (os);
}

void                Form::setSigned(bool x)
{
    _signed = x;
}