/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:10:51 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 20:42:25 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

class Awesome
{
	public :
		Awesome(void) : _n(42) {return ;}
		int get(void) const {return this->_n;}
	private :
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{ 
	o << rhs.get(); 
	return o;
}

template< typename T >
void print( T const & x ) 
{ 
	std::cout << x << std::endl; 
	return; 
}

int		main()
{
	int arr[] = {0, 1, 2, 3, 4};
	Awesome awesomes[5];
	std::string arr_str[] = {
						"one",
						"two",
						"three"
					 };

	::iter(arr_str, 3, print);
	::iter(arr, 5 , print);
	::iter(awesomes, 5 , print);
}
