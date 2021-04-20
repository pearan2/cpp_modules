/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:23:42 by honlee            #+#    #+#             */
/*   Updated: 2021/04/20 15:33:49 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(const unsigned int n) : max_length(n)
{

}

Span::Span(Span const &origin) : max_length(origin.max_length) , set(origin.set)
{

}

Span& Span::operator=(Span const &origin)
{
	this->max_length = origin.max_length;
	this->set = origin.set;
	return (*this);
}

Span::~Span()
{
	
}

void	Span::addNumber(unsigned int n)
{
	if (set.size() < this->max_length)
	{
		if (set.find(n) == set.end())
			set.insert(n);
		else
			throw NumberAlreadyExistException();
	}
	else
		throw SizeOverException();
}

unsigned int Span::shortestSpan(void) const
{
	if (set.size() < 2)
		throw NeedMoreThanOneException();
	unsigned int min_gap = UINT_MAX;
	for (std::set<unsigned int>::iterator iter = set.begin(); iter != set.end(); iter++)
	{
		std::set<unsigned int>::iterator iter2 = iter;
		iter2++;
		if (iter2 == set.end())
			break ;
		if ( (*iter2 - *iter) < min_gap )
			min_gap = (*iter2 - *iter);
	}
	return (min_gap);
}

unsigned int Span::longestSpan(void) const
{
	if (set.size() < 2)
		throw NeedMoreThanOneException();
	return (*(--set.end()) - *(set.begin()));
}

unsigned int Span::size(void) const
{
	return (set.size());
}

const char* Span::NeedMoreThanOneException::what() const throw()
{
	return "Span Exception : container needs more than 2 inputs";
}

const char* Span::SizeOverException::what() const throw()
{
	return "Span Exception : can not input more";
}

const char* Span::NumberAlreadyExistException::what() const throw()
{
	return "Span Exception : input value is already exist";
}
