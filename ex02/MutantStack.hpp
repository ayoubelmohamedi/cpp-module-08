

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin() {return this->begin();};
        iterator end() {return this->end();};
        const_iterator begin() {return this->begin();};
        const_iterator end() {return this->end();};

};