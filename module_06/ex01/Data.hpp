#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data 
{
    private:
        std::string s1;
        int         i;
        std::string s2;
    public:
        Data();
        Data(const Data & copy);
        Data & operator=(const Data & op);
        ~Data();
        void * serialize(void);
        Data * deserialize(void * raw);
        std::string getS1();
        std::string getS2();
        int         getI();
};



#endif