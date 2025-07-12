/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:56:43 by ael-moha          #+#    #+#             */
/*   Updated: 2025/07/12 15:40:39 by ael-moha         ###   ########.fr       */
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

        it =  easyfind(vec, 6);
        std::cout <<  *it << std::endl; 

        it = easyfind(vec , 5);
        std::cout <<  *it << std::endl; 
    } catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
  
    return (0);
}