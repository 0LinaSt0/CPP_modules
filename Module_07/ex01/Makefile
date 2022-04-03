# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 20:03:52 by msalena           #+#    #+#              #
#    Updated: 2022/04/03 20:47:34 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Iter.hpp

SRCS		=		main.cpp

OBGC		=		${SRCS:.cpp=.o}

PROG_NAME	=		./Template

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} ${SRCS} Makefile
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${HEAD} ${SRCS} ${OBGC} Makefile
				${C} ${FLAGS} ${OBGC} -o ${PROG_NAME}

clean:
				rm -r ${OBGC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fcelan re