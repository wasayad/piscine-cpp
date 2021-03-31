#include "Array.hpp"

int main(void)
{
    Array<std::string> test(2);
    Array<std::string> test2(test);
    Array<std::string> test3;
    Array<std::string> test4(test3);
    Array<std::string> const test5(2);

    std::string const str = "salut\n";
    test[0] = str;
    try {
        std::cout << test[0];
    }
    catch(std::exception &e) {
        std::cout << "Index out of range\n";
    }
    std::cout << test.size() << "\n";
    return (0);
}