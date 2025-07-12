/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:55:35 by ael-moha          #+#    #+#             */
/*   Updated: 2025/07/12 15:37:17 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container,const int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
     if (it == container.end()) {
        throw std::runtime_error("Value not found in container.");
    }
    return (it);
}
