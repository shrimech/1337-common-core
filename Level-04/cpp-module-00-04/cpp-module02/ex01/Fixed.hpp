/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 23:00:56 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/30 04:39:18 by shrimech         ###   ########.fr       */
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
    Fixed(const int intValue);
    Fixed(const float floatValue);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif