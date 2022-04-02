# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 15:48:58 by msalena           #+#    #+#              #
#    Updated: 2022/04/02 21:21:20 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDR			=	main.hpp

SRCS		=	main.cpp printNumbers.cpp

OBJC		=	${SRCS:.cpp=.o}

PROG_NAME	=	Casting

C			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror


all:			${PROG_NAME}

%.o:			%.cpp
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${SRCS} ${HDR} ${OBJC} Makefile
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -f ${OBJC}

fclean:			clean
				rm -f ${PROG_NAME}

re:				flcean all

.PHONY:			all clean fclean re
