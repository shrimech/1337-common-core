/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 04:49:45 by shrimech          #+#    #+#             */
/*   Updated: 2025/12/30 05:12:13 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Copy assignment operator

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        fixedPointValue = other.fixedPointValue;
    }
    return *this;
}
// -----------------------------------------------------
// Arithmetic operators

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}
// ------------------------------------------------------
// Comparison operators

bool Fixed::operator>(const Fixed &other) const
{
    return this->fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->fixedPointValue < other.fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->fixedPointValue >= other.fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->fixedPointValue <= other.fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->fixedPointValue == other.fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->fixedPointValue != other.fixedPointValue;
}
// ------------------------------------------------------
// Increment and Decrement operators
Fixed &Fixed::operator++()
{
    ++fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++fixedPointValue;
    return temp;
}

Fixed &Fixed::operator--()
{
    --fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --fixedPointValue;
    return temp;
}
// ------------------------------------------------------
// Min and Max functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}
// ------------------------------------------------------
Fixed::Fixed()
{
    fixedPointValue = 0;
}

Fixed::Fixed(const int intValue)
{
    fixedPointValue = intValue << fractionalBits;
}


Fixed::Fixed(const float floatValue)
{
    fixedPointValue = roundf(floatValue * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)(fixedPointValue) / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return fixedPointValue >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}