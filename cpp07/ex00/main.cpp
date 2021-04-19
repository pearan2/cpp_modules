/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:15:50 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 16:03:41 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome 
{
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const 
		{ 
			return (this->_n == rhs._n); 
		}
		bool operator!=( Awesome const & rhs ) const
		{ 
			return (this->_n != rhs._n); 
		}
		bool operator>( Awesome const & rhs ) const 
		{ 
			return (this->_n > rhs._n); 
		}
		bool operator<( Awesome const & rhs ) const 
		{ 
			return (this->_n < rhs._n); 
		}
		bool operator>=( Awesome const & rhs ) const 
		{ 
			return (this->_n >= rhs._n); 
		}
		bool operator<=( Awesome const & rhs ) const 
		{ 
			return (this->_n <= rhs._n); 
		}

		int		getNumber(void) const
		{
			return (this->_n);
		}

	private:
		int _n;
};

std::ostream &operator<<(std::ostream &out, Awesome const &awe)
{
	out << awe.getNumber();
	return (out);
}

int	main( void ) { 
	int a = 2;
	int b = 3;
	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome awe1(50);
	Awesome awe2(100);

	::swap(awe1, awe2);
	std::cout << awe1 << " | " << awe2 << std::endl;
	std::cout << "min( awe1, awe2 ) = " << ::min(awe1, awe2) << std::endl;
	std::cout << "max( awe1, awe2 ) = " << ::max(awe1, awe2) << std::endl;

	return 0; 
}
