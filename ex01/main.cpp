


#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main() {
    try {

        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
       
        std::cout << "===========TEST 10000 ==========" << std::endl;

        Span sp1(10000);

        for (int i = 0; i < 10000; ++i)
            sp1.addNumber(rand());

        std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}