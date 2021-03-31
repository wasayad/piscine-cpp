#include "iter.hpp"

#include <iostream>
#include <string>

void touppe(char i)
{
    i = i - 32;
    std::cout << i << "\n";
}


int main(void)
{
    char const *str = (char *)"salut a toi";
    //int test[5] = {15, 16 ,17 ,18 ,19};
    void (*toupp)(char);
    toupp = &touppe;
    ::iter(str, 5, touppe);
    std::cout << str << "\n";
}
