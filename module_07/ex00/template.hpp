#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T>

T max(T& a, T& b)
{
    if (a > b)
        return (a);
    if (b > a)
        return (b);
    return (b);
}

template <typename T>

T min(T& a, T& b)
{
    if (a > b)
        return (b);
    if (b > a)
        return (a);
    return (b);
}

template <typename T>

T const max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    if (b > a)
        return (b);
    return (b);
}

template <typename T>

T const min(const T& a, const T& b)
{
    if (a > b)
        return (b);
    if (b > a)
        return (a);
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