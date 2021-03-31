#include "Form.hpp"


Form::Form(std::string const& Name, unsigned int Grade, unsigned int executionGrade): name(Name), _signed(0), grade(Grade), _executionGrade(executionGrade)
{
    if (Grade < 1)
        throw Form::GradeTooHighExceptions();
    else if (Grade > 150)
        throw Form::GradeTooLowExceptions();
    if ( _executionGrade < 1)
        throw Form::GradeTooHighExceptions();
    else if (Grade > 150)
        throw Form::GradeTooLowExceptions();   
}

Form::~Form()
{
}

Form::Form(const Form & copy): name(copy.name), _signed(copy._signed), grade(copy.grade), _executionGrade(copy._executionGrade)
{
    (void)copy;
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
            std::cout << target.getName() << " can\'t sign this form cause his grade is to low\n";
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

unsigned int                Form::getExecutionGrade() const
{
    return _executionGrade;
}
