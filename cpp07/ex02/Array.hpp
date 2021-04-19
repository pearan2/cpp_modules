/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:22:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 20:37:13 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

//https://huiyu.tistory.com/entry/C-배열-인덱스-연산자-오버로딩
template <typename T>
class Array
{
	private : 
		unsigned int len;
		T *arr;
	public :
		Array()
		{
			this->arr = new T;
			this->len = 0;
		}
		Array(unsigned int n)
		{
			this->arr = new T[n];
			this->len = n;
		}
		//깊은 복사
		Array(Array const &origin)
		{
			this->len = origin.len;
			this->arr = new T[origin.len];
			for (unsigned int i=0; i<origin.len; i++)
				this->arr[i] = origin.arr[i];
		}
		Array& operator=(Array const &origin)
		{
			delete this->arr;

			this->len = origin.len;
			this->arr = new T[origin.len];
			for (unsigned int i=0; i<origin.len; i++)
				this->arr[i] = origin.arr[i];
			return (*this);
		}
		
		~Array()
		{
			if (this->len == 0)
				delete this->arr;
			else
				delete[] this->arr;
		}
		
		class OutOfRangeException : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("Index is out of range");
			}
		};

		T& operator[](unsigned int idx)
		{
			if (idx >= this->len)
				throw OutOfRangeException();
			return (arr[idx]);
		}

		const T& operator[](unsigned int idx) const
		{
			if (idx >= this->len)
				throw OutOfRangeException();
			return (arr[idx]);
		}

		unsigned int size(void) const
		{
			return (this->len);
		}

		void	show_all() const
		{
			if (this->len == 0)
				throw OutOfRangeException();

			for (unsigned i = 0; i < this->len; i++)
				std::cout << this->arr[i] << std::endl;
		}
};

#endif