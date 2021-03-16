#include "phonebook.hpp"

Phonebook::Phonebook()
{

}

int Phonebook::ADD(void)
{
    std::cout<<"Enter the first name of the contact to add\n";
    std::getline(std::cin, first_name);
    std::cout<<"Enter the last name of the contact to add\n";
    std::getline(std::cin, last_name);
    std::cout<<"Enter the nick name of the contact to add\n";
    std::getline(std::cin, nick_name);
    std::cout<<"Enter the login of the contact to add\n";
    std::getline(std::cin, login);
    std::cout<<"Enter the postal address of the contact to add\n";
    std::getline(std::cin, postal_address);
    std::cout<<"Enter the email of the contact to add\n";
    std::getline(std::cin, email);
    std::cout<<"Enter the phone number of the contact to add\n";
    std::getline(std::cin, phone_number);
    std::cout<<"Enter the birthday of the contact to add\n";
    std::getline(std::cin, birthday);
    std::cout<<"Enter the favorite_meal of the contact to add\n";
    std::getline(std::cin, favorite_meal);
    std::cout<<"Enter the underwear color of the contact to add\n";
    std::getline(std::cin, underwear);
    std::cout<<"Enter the darkest secret of the contact to add\n";
    std::getline(std::cin, secret);
    if (first_name[0] == 0 || last_name[0] == 0 || nick_name[0] == 0)
    {
        std::cout<<"Error the three first field must be filled\n";
        return (0);
    }
    else
        return (1);
}

void     Phonebook::SEARCH(void)
{
    
    std::cout<<"contact first name      : "<<first_name<<std::endl;
    std::cout<<"contact last name       : "<<last_name<<std::endl;
    std::cout<<"contact nick name       : "<<nick_name<<std::endl;
    std::cout<<"contact login           : "<<login<<std::endl;
    std::cout<<"contact postal address  : "<<postal_address<<std::endl;
    std::cout<<"contact email           : "<<email<<std::endl;
    std::cout<<"contact phone number    : "<<phone_number<<std::endl;
    std::cout<<"contact birthday        : "<<birthday<<std::endl;
    std::cout<<"contact favorite meal   : "<<favorite_meal<<std::endl;
    std::cout<<"contact underwear color : "<<underwear<<std::endl;
    std::cout<<"contact darkest secret  : "<<secret<<std::endl;
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
                        if (contact[j].get_first_name().length() < 10)
                        {
                            format.append(space.substr(0, 10 - contact[j].get_first_name().length()));
                            format.append(contact[j].get_first_name().substr(0, 10));
                        }
                        else if (contact[j].get_first_name().length() > 10)
                        {
                            format.append(contact[j].get_first_name().substr(0, 9));
                            format.append(".");
                        }
                        else
                            format.append(contact[j].get_first_name().substr(0, 10));
                        format.append("|");
                        if (contact[j].get_last_name().length() < 10)
                        {
                            format.append(space.substr(0, 10 - contact[j].get_last_name().length()));
                            format.append(contact[j].get_last_name().substr(0, 10));
                        }
                        else if (contact[j].get_last_name().length() > 10)
                        {
                            format.append(contact[j].get_last_name().substr(0, 9));
                            format.append(".");
                        }
                        else
                            format.append(contact[j].get_last_name().substr(0, 10));
                        format.append("|");
                        if (contact[j].get_nick_name().length() < 10)
                        {
                            format.append(space.substr(0, 10 - contact[j].get_nick_name().length()));
                            format.append(contact[j].get_nick_name().substr(0, 10));
                        }
                        else if (contact[j].get_nick_name().length() > 10)
                        {
                            format.append(contact[j].get_nick_name().substr(0, 9));
                            format.append(".");
                        }
                        else
                            format.append(contact[j].get_nick_name().substr(0, 10));
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
                    if (j >= (unsigned long)i)
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