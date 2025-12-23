/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:49:08 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/18 17:04:02 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T max(T num, T num2)
{
    return ((num > num2) ? num : num2);
}

template <typename T>
T min(T num, T num2)
{
    return ((num < num2) ? num : num2);
}

template <typename T>
void swap(T &num, T &num2)
{
    T temp;
    temp = num;
    num = num2;
    num2 = temp;
}

#endif