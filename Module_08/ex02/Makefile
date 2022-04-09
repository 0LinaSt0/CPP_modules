# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 20:17:51 by msalena           #+#    #+#              #
#    Updated: 2022/04/09 20:38:47 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDR			=	MutantStack.hpp

SRCS		=	main.cpp

OBJC		=	${SRCS:.cpp=.o}

PROG_NAME	=	./STL

C			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror


all:			${PROG_NAME}

%.o:			%.cpp ${HDR} ${SRCS} Makefile
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${OBJC} ${SRCS}
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -f ${OBJC}

fclean:			clean
				rm -f ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re