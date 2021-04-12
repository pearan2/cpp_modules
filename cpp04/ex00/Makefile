# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: honlee <honlee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 21:20:00 by honlee            #+#    #+#              #
#    Updated: 2021/04/12 12:18:03 by honlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		\
					Sorcerer.cpp\
					Poen.cpp\
					Victim.cpp\
					main.cpp\


NAME		=		sorcerer

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