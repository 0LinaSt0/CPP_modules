# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 14:08:41 by msalena           #+#    #+#              #
#    Updated: 2022/01/30 20:49:19 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=		main.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		Replace

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror



all:			Replace

%.o:			%.cpp
				${GCC} ${FLAGS} -c $< -o $@

$(PROG_NAME):	${SRCS} ${OBJC} Makefile
				${GCC} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re




