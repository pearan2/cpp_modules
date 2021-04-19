/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:25:28 by honlee            #+#    #+#             */
/*   Updated: 2021/04/19 14:03:33 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

# define DATA_SOURCE "0123456789abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ"


# pragma pack(push, 1)
struct Data
{
	std::string s1;
	int n;
	std::string s2;
};
# pragma pack(pop)

void * serialize(void);
void * serialize_with_show(void);
Data *deserialize (void *raw);

#endif