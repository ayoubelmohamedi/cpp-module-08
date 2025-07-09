
#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);

    // trying list container 
    std::list <int> lstack;

    lstack.push_back(5);
    lstack.push_back(17);

    std::cout << "list top : "<< mstack.top() << std::endl;

    lstack.pop_back();
    std::cout << "list " << mstack.size() << std::endl;

    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);

    lstack.push_back(0);

    // while (std::list<int>::iterator lit = lstack.begin(); lit != lstack.end(); ++lit)
    // {

    // }

    std::cout << "List contents:" << std::endl;
    for (std::list<int>::iterator lit = lstack.begin(); lit != lstack.end(); ++lit) {
        std::cout << *lit << std::endl;
    }


    return 0;
}