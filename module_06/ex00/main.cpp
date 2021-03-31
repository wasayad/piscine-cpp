#include <iostream>
#include <string>    
#include <limits.h>
#include <ios>
#include <iomanip>
#include "math.h"
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong number of arguments\n";
        return (1);
    }
    int accu = 0;
    int i = 0;
    double d = 0;
    std::string tmp = argv[1];
    d = std::atof(tmp.c_str());
    while (argv[1][i] && argv[1][i] != '.')
        i++;
    if (argv[1][i] == '.')
        i++;
    while (argv[1][i + accu])
        accu++;
    if (accu > 6)
    {
        accu = 6;
    }
    if (accu == 0)
        accu = 1;
    if (d < CHAR_MIN || d > CHAR_MAX || isnan(d) || isinf(d))
    {
        std::cout << "char: impossible\n";
    }
    else if(std::isprint(d) == 1)
        std::cout << "char: "<< static_cast<char>(d) << "\n";
    else
        std::cout << "char: Non displayable\n";



    if (d < INT_MIN || d > INT_MAX || isnan(d) || isinf(d))
    {
        std::cout << "int: impossible\n";
    }
    else
    {
        std::cout << "int: " << static_cast<int>(d) <<"\n";
    }



    std::cout << std::setprecision(accu) << std::fixed << "float: " << static_cast<float>(d) << "f\n";
    std::cout << std::setprecision(accu) << std::fixed << "double: " << d << "\n";
}