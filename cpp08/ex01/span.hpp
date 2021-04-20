/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:23:49 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 15:21:49 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <iostream>
# include <string>
# include <limits.h>

class Span
{
	private :
		unsigned int max_length;
		std::set<unsigned int> set;
		Span();
	public	:
		Span(const unsigned int n);
		Span(Span const  & origin);
		Span& operator=(Span const & origin);
		~Span();
		
		void addNumber(unsigned int n);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		unsigned int size(void) const;

		class SizeOverException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class NeedMoreThanOneException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class NumberAlreadyExistException : public std::exception
		{
			virtual const char * what() const throw();
		};
};

#endif