#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>

class Phonebook
{
    public:
        Phonebook();
        Phonebook(std::string name);
        void    SEARCH(void);
        int    ADD(void);
        void    EXIT(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nick_name(void);
        std::string get_login(void);
        std::string get_postal_address(void);
        std::string get_email(void);
        std::string get_phone_number(void);
        std::string get_birthday(void);
        std::string get_favorite_meal(void);
        std::string get_underwear(void);
        std::string get_secret(void);
    private :
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string login;
        std::string postal_address;
        std::string email;
        std::string phone_number;
        std::string birthday;
        std::string favorite_meal;
        std::string underwear;
        std::string secret;
};

#endif