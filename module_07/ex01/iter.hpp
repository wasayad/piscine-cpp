#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename S, typename R>

void    iter(T *array, S lenght, R &func)
{
    int     i = 0;

    while (i < lenght)
    {
        func(array[i]);
        i++;
    }
}

#endif