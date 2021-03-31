#include "Span.hpp"
//int main() {
//
// Span sp = Span(133);
// try {
//    for (int i = 0; i < 135; i++) {
//       sp.addNumber(i);
//       std::cout << i << std::endl;
//    }
// }
// catch (std::exception &e) {
//    std::cout << "BUG\n";
// }
// return 0;
//}
int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(3);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "-----------------\n";
        Span sp2 = Span(5);
        std::vector<int> tab(1, 42);
        tab.push_back(50);
        tab.push_back(1);
        //int tab2[5] = {1,2,3,4,5};
        sp2.addMulipleNumber(tab.begin(), tab.end());
        std::cout << "Size : " << tab.size() << "\n";
        sp2.addNumber(3);
        sp2.addNumber(3);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout  << sp2.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}