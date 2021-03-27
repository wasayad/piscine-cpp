#include "Data.hpp"
#include <limits.h>

#include <sstream>
Data::Data(){
    s1 = "       ";
    s1[0] = rand() % 26 + 97;
    s1[1] = rand() % 26 + 97;
    s1[2] = rand() % 26 + 97;
    s1[3] = rand() % 26 + 97;
    s1[4] = rand() % 26 + 97;
    s1[5] = rand() % 26 + 97;
    s1[6] = rand() % 26 + 97;
    s1[7] = 0;
    s2 = "       ";
    s2[0] = rand() % 26 + 97;
    s2[1] = rand() % 26 + 97;
    s2[2] = rand() % 26 + 97;
    s2[3] = rand() % 26 + 97;
    s2[4] = rand() % 26 + 97;
    s2[5] = rand() % 26 + 97;
    s2[6] = rand() % 26 + 97;
    s2[7] = 0;
    i = (rand() % INT_MAX);
}

Data::~Data(){}

Data::Data(const Data & copy){*this = copy;}

Data & Data::operator=(const Data & copy)
{
    s1 = copy.s1;
    i = copy.i;
    s2 = copy.s2;
    return *this;
}

void    *Data::serialize(void)
{
    std::stringstream tmp;
    std::string *tmp1 = new std::string;
    void *ret;

    tmp << s1 << i <<  s2;
    *tmp1 = tmp.str();
    ret = tmp1;
    return (ret);
}

Data *Data::deserialize(void *raw)
{
    std::string *str;
    Data *ret = new Data();
    std::string tmp;
    str = reinterpret_cast<std::string *>(raw);

    ret->s1 = str->substr(0, 7);
    tmp = str->substr(7, str->length());

    ret->s2 = str->substr(str->length() - 7, 7);
    tmp = str->substr(7, str->length() - 7);
    ret->i = std::atoi(tmp.c_str());
    delete str;
    return (ret);
}

std::string Data::getS1()
{
    return (s1);
}

std::string Data::getS2()
{
    return (s2);
}

int          Data::getI()
{
    return (i);
}