/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:39:56 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 23:00:29 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = input << this->numberOfFractionalBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	// this->fixed_point = roundf(input << this->numberOfFractionalBits);
	// 위 처럼 못하는 이유는, 비트연산은 피 연산자가 정수형으로 제한되어 있다.
	// 따라서 1비트를 왼쪽으로 미는 것은 2배를 곱해주는 것과 같으므로 아래와 같이 쓴다.	
	this->fixed_point = roundf(input * (1 << this->numberOfFractionalBits));
}

Fixed::Fixed(const Fixed& fixed)
{
	this->fixed_point = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed &Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->fixed_point = fixed.fixed_point;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> this->numberOfFractionalBits);
}

float Fixed::toFloat(void) const
{
	return (this->fixed_point / (float) (1 << numberOfFractionalBits));
}

//https://docs.microsoft.com/ko-kr/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-160
//마지막으로 out 을 반환하지 않을 경우 연산자를 이어 사용할 수 없다.
std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}