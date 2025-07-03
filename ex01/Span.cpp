


#include "Span.hpp"


Span::Span(unsigned int n) : max(n) {}

void Span::addNumber(int nbr)
{
    if (this->nbrs.size() >= this->max)
        throw std::length_error("index out of range");
    nbrs.push_back(nbr);
}

int Span::shortestSpan()
{
    if (nbrs.size() < 2)
        throw std::runtime_error("Not enough nbrs to find Span");
    
    std::vector<int> sorted = nbrs;
    std::sort(sorted.begin(), sorted.end());

    int minSpan = std::abs(sorted[1] - sorted[0]);
    for (size_t i = 1; i < sorted.size() - 1; i++)
    {
        int span = std::abs(sorted[i + 1] - sorted[i]);
        if (span < minSpan)
            minSpan = span;
    }
    return (minSpan);
}

int Span::longestSpan()
{
    if (nbrs.size() < 2)
        throw std::runtime_error("Not enough nbrs to find Span");
    int minVal = *std::min_element(nbrs.begin(), nbrs.end());
    int maxVal = *std::max_element(nbrs.begin(), nbrs.end());
    return (maxVal - minVal);
}