/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:19:15 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 18:59:07 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int     main()
{
    srand(clock());
    void *temp = serialize();
    Data *d = deserialize(temp);

    // void *temp = serialize_with_show();
    // Data *d = deserialize(temp);



    std::cout << "d->s1 : " << d->s1 << std::endl;
    std::cout << "d->n  : " << d->n << std::endl;
    std::cout << "d->s2 : " << d->s2 << std::endl;

    delete (d);
    delete (reinterpret_cast<char *>(temp));
}