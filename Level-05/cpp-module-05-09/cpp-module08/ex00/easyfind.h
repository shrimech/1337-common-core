#ifndef EASYFIND_H
#define EASYFIND_H


#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, typename T::value_type value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in container");
    return it;
}

#endif