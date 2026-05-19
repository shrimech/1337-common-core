/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:26:23 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/28 01:58:50 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <cmath>


class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif