#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat tmp1("tups", 2);
        Bureaucrat tmp("tups1", 7);
        Bureaucrat tmp2("tups2", 149);
        Bureaucrat tmp3("tups3", 140);
        tmp.promote();
        tmp3.demote();
        std::cout<<tmp;
        tmp.demote();
        std::cout<<tmp;
    }
    catch(const Bureaucrat::GradeTooLowExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (0);
    }catch(const Bureaucrat::GradeTooHighExceptions& e)
    {
        std::cout<< e.what() << std::endl;
        return (0);
    }    


}