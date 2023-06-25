/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:48:46 by tedelin           #+#    #+#             */
/*   Updated: 2023/06/25 18:48:46 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T& v1, T& v2)
{
    T tmp = v1;

    v1 = v2;
    v2 = tmp;
}

template <typename T>
const T& min(const T& v1, const T& v2)
{
    return (v1 < v2 ? v1 : v2);
}

template <typename T>
const T& max(const T& v1, const T& v2)
{
    return (v1 > v2 ? v1 : v2);
}

#endif