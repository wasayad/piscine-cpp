#include "Span.hpp"
Span::Span(unsigned int N) {
   _span.reserve(N);
   _N = N;
}

Span::~Span() {}

Span::Span(const Span &copy) {
   *this = copy;
}

Span &Span::operator=(const Span &copy) {
   _N = copy._N;
   _span = copy._span;
   return *this;
}

void Span::addNumber(int nb) {
   if (_span.size() == _span.capacity())
      throw CapacityException();
   _span.push_back(nb);
}

void Span::addMulipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
   if (end - begin <= _N)
      _span.assign(begin, end);
   else
      throw CapacityException();
}

int Span::shortestSpan() {
   if (_span.size() == 0 || _span.size() == 1)
      throw  NotEnoughNbException();
   std::vector<int> g;
   g = _span;
   long long tmp = LLONG_MAX;
   std::sort(g.begin(), g.end());
   for (size_t i = 1; i < g.size(); i++)
   {
      if (g[i - 1]  > g[i]) {
         if (tmp > (g[i - 1] - g[i]))
            tmp = (g[i - 1] - g[i]);
      }
      else {
         if (tmp > (g[i] - g[i - 1]))
            tmp = (g[i] - g[i - 1]);
      }
   }
   return tmp;
}

int Span::longestSpan() {
   if (_span.size() == 0 || _span.size() == 1)
      throw  NotEnoughNbException();
   std::vector<int> g;
   g = _span;
   long long tmp = LLONG_MAX;
   std::sort(g.begin(), g.end());
   tmp = g[g.size() - 1] - g[0];
   return tmp;
}
