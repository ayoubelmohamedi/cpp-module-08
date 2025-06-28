/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:56:43 by ael-moha          #+#    #+#             */
/*   Updated: 2025/06/18 23:48:20 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(3);
    vec.push_back(91);

    try 
    {
        std::vector<int>::iterator it =  easyfind(vec, 3);
        std::cout <<  *it << std::endl; 
    } catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::vector<std::string> words;
  
    words.push_back("apple");
    words.push_back("banana");
    words.push_back("cherry");

    try {
        std::vector<std::string>::iterator it = easyfind(words, 'b');
        std::cout << "vector<string>: found " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cout << "vector<string>: " << e.what() << std::endl;
    }


    return (0);
}