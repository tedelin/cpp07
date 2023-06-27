/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:59:37 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/26 11:17:01 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void    my_function(T& elt)
{
    std::cout << elt << std::endl;    
}

template <typename T>
void iter(T* tab, std::size_t size, void (*func)(T& elt))
{
    for (std::size_t i = 0; i < size; i++)
        func(tab[i]);
}

#endif