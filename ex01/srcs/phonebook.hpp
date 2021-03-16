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
        std::string get_first_name(void) {
            return first_name;
        }
        std::string get_last_name(void) {
            return last_name;
        }
        std::string get_nick_name(void) {
            return nick_name;
        }
        std::string get_login(void) {
            return login;
        }
        std::string get_postal_address(void) {
            return postal_address;
        }
        std::string get_email(void) {
            return email;
        }
        std::string get_phone_number(void) {
            return phone_number;
        }
        std::string get_birthday(void) {
            return birthday;
        }
        std::string get_favorite_meal(void) {
            return favorite_meal;
        }
        std::string get_underwear(void) {
            return underwear;
        }
        std::string get_secret(void) {
            return secret;
        }
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
