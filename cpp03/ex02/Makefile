# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: honlee <honlee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 21:20:00 by honlee            #+#    #+#              #
#    Updated: 2021/04/08 20:47:47 by honlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		\
					FragTrap.cpp\
					ScavTrap.cpp\
					ClapTrap.cpp\
					main.cpp\

NAME		=		clapTrap

CC			=		clang++

CF			=		-Wall -Wextra -Werror -std=c++98 ${SRCS}
DCF			=		-g ${SRCS}

${NAME}     :       
					${CC} ${CF} -o ${NAME}

test		:		fclean
					${CC} ${DCF} -o ${NAME}

fclean		:		
					rm -f ${NAME}

re			:		fclean all

all         :      	${NAME}

.PHONY		:		fclean re all test ${NAME}