/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:26:54 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/23 11:26:59 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    int *a = new int[10];
    Array<int> arr(10);

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int temp = rand();
        arr[i] = temp;
        a[i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        if ((arr[i] != a[i]))
            std::cout << "not equal" << std::endl;
        else
            std::cout << "OK" << std::endl;
    }

    std::cout << "\nSize: " << arr.size() << std::endl;
    delete[] a;
}

/* main given by the subject

#define MAX_VAL 750

// program ( without any modifications ) should input:
//  index out of array range
//  index out of array range

int main(int, char **)
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0; // should give exception
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0; // should give exception
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror;
    return 0;
} */