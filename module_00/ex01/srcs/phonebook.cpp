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

std::string Phonebook::get_first_name(void) {
            return first_name;
        }
std::string Phonebook::get_last_name(void) {
    return last_name;
}
std::string Phonebook::get_nick_name(void) {
    return nick_name;
}
std::string Phonebook::get_login(void) {
    return login;
}
std::string Phonebook::get_postal_address(void) {
    return postal_address;
}
std::string Phonebook::get_email(void) {
    return email;
}
std::string Phonebook::get_phone_number(void) {
    return phone_number;
}
std::string Phonebook::get_birthday(void) {
    return birthday;
}
std::string Phonebook::get_favorite_meal(void) {
    return favorite_meal;
}
std::string Phonebook::get_underwear(void) {
    return underwear;
}
std::string Phonebook::get_secret(void) {
            return secret;
}
