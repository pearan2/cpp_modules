/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:14:38 by honlee            #+#    #+#             */
/*   Updated: 2021/04/17 19:21:46 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_HPP
# define UTIL_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <stdlib.h>
# include <time.h>
# include <iostream>

Base *generate(void);
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif