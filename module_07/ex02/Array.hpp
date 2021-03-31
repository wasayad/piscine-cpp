#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
    private:
        T *var;
        size_t sized;

    public:
        Array<T>() {
            var = new T;
            sized = 0;
        }
        Array<T>(int n) {
            var = new T[n];
            sized = n;
            for (size_t i = 0; i < sized; i++) {
                var[i] = T();
            }
        }
        T& operator[](size_t index) {
                if (index >= sized)
                    throw std::exception();
                return var[index];
        }
        T const &operator[](T const index) const{
                if (index >= sized)
                    throw std::exception();
                return var[index];
        }
        Array<T>(const Array & copy) {
            *this = copy;
        };
        Array & operator=(const Array & copy) {
            sized = copy.sized;
            if (copy.sized == 0)
                var = new T;
            else
                var = new T[sized];
            for (size_t i = 0; i < sized; i++) {
                var[i] = copy.var[i];
            }
            return *this;
        }
        ~Array() {
            if (sized == 0)
				delete var;
			else
				delete[] var;
        }
        size_t   size()
        {
            return (sized);
        }
};

#endif