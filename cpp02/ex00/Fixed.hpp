/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:28:24 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 21:53:18 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	private :
		int fixed_point;
		static const int numberOfFractionalBits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);

		//맴버함수 내부에서 맴버 변수의 값을 바꾸지 못한다.
		//const 함수로, 함수내에서 맴버변수를 변화시키지 않는다는 의미이다.
		int	getRawBits(void) const;
		void		setRawBits(int const raw);
};

#endif