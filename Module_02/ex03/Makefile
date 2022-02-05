# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 16:31:30 by msalena           #+#    #+#              #
#    Updated: 2022/02/05 17:23:46 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADS		=		Fixed.hpp Point.hpp

SRCS		=		main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		Fixed

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror


all:			${PROG_NAME}

%.o:			%.cpp ${HEADS}
				${GCC} ${FLAGS} -c $< -o $@

$(PROG_NAME):	${SRCS} ${OBJC} ${HEADS} Makefile
				${GCC} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re
