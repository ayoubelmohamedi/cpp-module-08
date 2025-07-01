

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span
{
    std::vector<int> nbrs;
    const unsigned int max;
    Span();
    //If there are no numbers stored,
    //or only one, no span can be found. Thus, throw an exception.
    public:
        Span(unsigned int n);
        void addNumber(int nbr);
        int shortestSpan(int nbr);
        int longestSpan(int nbr);

};


template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
     if (it == container.end()) {
        throw std::runtime_error("Value not found in container.");
    }
    return (it);
}
