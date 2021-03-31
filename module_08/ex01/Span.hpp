#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <cstring>
#include <vector>
class Span {
   public:
      Span(unsigned int N);
      ~Span();
      Span(const Span &copy);
      Span &operator=(const Span &copy);

      void addNumber(int nb);
      void addMulipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
      
      int shortestSpan();
      int longestSpan();

    class NotEnoughNbException : public std::exception{
            public:
                virtual const char * what() const throw() {
                    return ("Not enough number in span !");
                }
        };
    class CapacityException : public std::exception{
        public:
            virtual const char * what() const throw() {
                return ("Span capacity fulfilled !");
            }
    };

   private:
      Span();
      std::vector<int> _span;
      unsigned int _N;
};
#endif