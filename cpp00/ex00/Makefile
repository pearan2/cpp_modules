# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: honlee <honlee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 05:28:05 by honlee            #+#    #+#              #
#    Updated: 2021/04/07 00:54:48 by honlee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		\
					megaphone.cpp

NAME		=		megaphone

CC			=		clang++

CF			=		-Wall -Wextra -Werror ${SRCS}
DCF			=		-g -I ${SRCS}

${NAME}     :       
					${CC} ${CF} -o ${NAME}

test		:		fclean
					${CC} ${DCF} -o ${NAME}

fclean		:		
					rm -f ${NAME}

re			:		fclean all

all         :      	${NAME}

.PHONY		:		fclean re all test ${NAME}