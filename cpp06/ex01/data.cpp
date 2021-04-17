/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:29:00 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 18:56:20 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

void * serialize_with_show(void)
{
    char *ret;

    ret = new char[20];
    
    std::cout << "s1 : ";
    for (int i=0; i<8; i++)
    {
        char picked = DATA_SOURCE[rand() % 62];
        std::cout << picked;
        ret[i] = picked;
    }
    std::cout << std::endl;

    int value = rand() % INT_MAX;
    std::cout << "d  : " << value << std::endl;
    *(reinterpret_cast<int *>(ret + 8)) = value;

    std::cout << "s2 : ";
    for (int i=0; i<8; i++)
    {
        char picked = DATA_SOURCE[rand() % 62];
        std::cout << picked;
        ret[16 + i] = picked;
    }
    std::cout << std::endl;
        
    
    return (reinterpret_cast<void *>(ret));
}

void * serialize(void)
{
    char *ret;

    ret = new char[20];
    for (int i=0; i<8; i++)
        ret[i] = DATA_SOURCE[rand() % 62];

    *(reinterpret_cast<int *>(ret + 8)) = rand() % INT_MAX;

    for (int i=0; i<8; i++)
        ret[16 + i] = DATA_SOURCE[rand() % 62];
    
    return (reinterpret_cast<void *>(ret));
}

Data *deserialize (void *raw)
{
    Data * ret;

    ret = new Data;

    ret->s1 = std::string(reinterpret_cast<char *>(raw), 8);
    ret->n = *(reinterpret_cast<int *>((reinterpret_cast<char *>(raw) + 8)));
    ret->s2 = std::string(reinterpret_cast<char *>((reinterpret_cast<char *>(raw) + 16)), 8);

    return (ret);
}