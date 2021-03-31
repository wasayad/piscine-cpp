#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <typeinfo>
template <typename T, typename S>
void    iter(T *array, S lenght, void (*func)(T &))
{
    S     i = 0;
    while (i < lenght)
    {
        func((array)[i]);
        i++;
    }
}

template <typename T, typename S>
void    iter(T const *array, S lenght, void (*func)(T const &))
{
    S     i = 0;
    while (i < lenght)
    {
        func((array)[i]);
        i++;
    }
}

#endif