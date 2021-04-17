/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:25:20 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 19:28:59 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

int         main()
{
    srand(clock());

    Base *base;
    
    base = generate();
    //base = new Base();
    //base = NULL;

    identify_from_pointer(base);
    identify_from_reference(*base);

    delete base;
}