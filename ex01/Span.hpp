

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
        int shortestSpan();
        int longestSpan();

};


