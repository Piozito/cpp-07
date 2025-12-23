/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:00:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/23 11:01:23 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->_data;
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array<T> &other) : _data(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < other._size; i++)
        this->_data[i] = other._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        delete[] this->_data;
        this->_size = other._size;
        this->_data = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
            this->_data[i] = other._data[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](const size_t index) const
{
    if (index < this->_size)
        return this->_data[index];
    else
        throw(Array<T>::OutOffArrayException());
}

template <typename T>
const char *Array<T>::OutOffArrayException::what() const throw()
{
    return ("index out of array range.");
}

template <typename T>
size_t Array<T>::size() const
{
    return (this->_size);
}