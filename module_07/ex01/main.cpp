#include "iter.hpp"

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "salut a toi";

    ::iter(&str, 12, std::toupper);
    std::cout << str << "\n";
}