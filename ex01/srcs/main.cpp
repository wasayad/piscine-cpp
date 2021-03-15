#include "phonebook.hpp"

Phonebook::Phonebook()
{

}

int main(void)
{
    std::string command;
    std::string format = "";
    std::string space = "          ";
    Phonebook contact[8];
    char           c[2];
    int     i;
    unsigned long     j;
    int     search_index;

    search_index = 0;
    j = 0;
    i = 0;
    std::cout<<"Welcome to my great phone contact manager!\n";
    std::cout<<"Use one of the three following command : SEARCH/ADD/EXIT\n";
    while(std::getline(std::cin, command))
    {
        if (command[j] == ' ')
        {
            while (command[j] && command[j] == ' ')
                j++;
            command.erase(0, j);
        }
        j = 0;
        if ((search_index = command.compare("SEARCH")) == 0)
        {
            std::cout<<"|  index   |first name|last name |  pseudo  |\n";
            j = 0;
            if (i == 0)
                std::cout<<"There is no contact to search\n";
            else
            {
                while (j <   (unsigned long)i)
                {
                        format.append("|");
                        format.append(space.substr(0, 9));
                        c[0] = j + 48;
                        format.append(c);
                        format.append("|");
                        if (contact[j].first_name.length() < 10)
                            format.append(space.substr(0, 10 - contact[j].first_name.length()));
                        format.append(contact[j].first_name.substr(0, 10));
                        format.append("|");
                        if (contact[j].last_name.length() < 10)
                            format.append(space.substr(0, 10 - contact[j].last_name.length()));
                        format.append(contact[j].last_name.substr(0, 10));
                        format.append("|");
                        if (contact[j].nick_name.length() < 10)
                            format.append(space.substr(0, 10 - contact[j].nick_name.length()));
                        format.append(contact[j].nick_name.substr(0, 10));
                        format.append("|");
                        std::cout<<format<<std::endl;
                        format.erase(0, format.length());
                        j++;
                }
                std::cout<<"Choose the index of the contact to diplay\n";
                getline(std::cin, command);
                if (command[1] == '\0')
                {
                        j = command[0] - 48;
                    if (j < 0 || j >= (unsigned long)i)
                        std::cout<<"Wrong index input\n";
                    else
                        contact[j].SEARCH();
                }
                else
                {
                    std::cout<<"Invalid index\n";
                }
            }
        }
        else if (command.compare("ADD") == 0)
        {
            if (i > 7)
            {
                std::cout<<"To much contact stop bullying my memory\n";
            }
            else
            {
                if (contact[i].ADD() == 1)
                    i++;;

            }
        }
        else if (command.compare("EXIT") == 0)
        {
                break;
        }
        std::cout<<"Use one of the three following command : SEARCH/ADD/EXIT\n";
    }
    return (1);
}