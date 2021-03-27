#include "Data.hpp"



int main(void)
{
    srand (time(NULL));
    Data data;

    std::cout << data.getS1() << "\n";
    std::cout << data.getS2() << "\n";
    std::cout << data.getI() << "\n";
    Data *test;
    void *ret;
    ret = data.serialize();
    test = data.deserialize(ret);

    std::cout << test->getS1() << "\n";
    std::cout << test->getS2() << "\n";
    std::cout << test->getI() << "\n";
    delete test;
}