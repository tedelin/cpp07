/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:59:35 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/27 11:58:18 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    float tab2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string tab3[] = {"Hello", "World", "!"};
    iter(tab, 5, print);
    std::cout << "-----------------" << std::endl;
    iter(tab2, 5, print);
    std::cout << "-----------------" << std::endl;
    iter(tab3, 3, print);
    return 0;   
}