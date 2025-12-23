/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:18:09 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/23 10:30:52 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array
{
private:
    T *_data;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array<T> &operator=(const Array &other);
    T &operator[](const size_t index) const;
    ~Array();

    size_t size() const;
    class OutOffArrayException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#include "Array.tpp"

#endif