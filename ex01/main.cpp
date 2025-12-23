/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:48:16 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/12/22 15:13:27 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void inc10(int &num)
{
    num += 10;
}

void appender(std::string &str)
{
    str.append(".success");
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string strings[] = {"teste teste", "dasdsadas", "12313"};

    std::cout << "\n========== BEFORE INTER ==========\n"
              << std::endl;

    for (int i = 0; i < 9; i++)
        std::cout << "Int " << i << ": " << a[i] << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "String " << i << ": " << strings[i] << std::endl;

    std::cout << "\n========== AFTER INTER ==========\n"
              << std::endl;

    iter(strings, 3, appender);
    iter(a, 9, inc10);

    for (int i = 0; i < 9; i++)
        std::cout << "Int " << i << ": " << a[i] << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << "String " << i << ": " << strings[i] << std::endl;
}