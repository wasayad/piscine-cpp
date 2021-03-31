#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
​
# include <iostream>
# include <cstring>
# include <stack>
# include <deque>
# include <list>
# include <vector>
​
template< class T, class Container = std::deque<T> >
	class MutantStack : public std::stack<T, Container> {
​
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};
​
​
#endif