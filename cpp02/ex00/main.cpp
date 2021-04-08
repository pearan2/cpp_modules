/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:59:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 22:06:27 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main()
{
	Fixed a;   // 기본생성자
	Fixed b( a );  //  복사 생성자
	Fixed c;
	Fixed d = a;

	c = b;  // 할당연산자

	std::cout << a.getRawBits() << std::endl; 
	std::cout << b.getRawBits() << std::endl; 
	std::cout << c.getRawBits() << std::endl;
	return 0;
}