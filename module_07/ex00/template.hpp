#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T>

T max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    if (b > a)
        return (b);
    return (b);
}

template <typename T>

T min(const T& a, const T& b)
{
    if (a > b)
        return (b);
    if (b > a)
        return (b);
    return (b);
}

template <typename T>

void swap( T& a,  T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif