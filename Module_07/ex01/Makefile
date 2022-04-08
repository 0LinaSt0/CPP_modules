# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 20:03:52 by msalena           #+#    #+#              #
#    Updated: 2022/04/08 19:57:43 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Iter.hpp

SRCS		=		main.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		./Template

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} ${SRCS} Makefile
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${SRCS} ${OBJC}
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fcelan re