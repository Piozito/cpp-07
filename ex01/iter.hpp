/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:06:39 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/22 15:04:42 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T_array, typename T_function>
void iter(T_array &array, const size_t len, T_function function)
{
    for (size_t i = 0; i < len; i++)
        function(array[i]);
}

#endif