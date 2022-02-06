# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 20:31:57 by msalena           #+#    #+#              #
#    Updated: 2022/02/06 15:05:56 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		ClapTrap.hpp ScavTrap.hpp

SRCS		=		ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS		=		${SRCS:.cpp=.o}

PROG_NAME	=		ClapTrap

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} Makefile
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${SRCS} ${OBJS} ${HEAD} Makefile
				${C} ${FLAGS} ${OBJS} -o ${PROG_NAME}

clean:
				rm -r ${OBJS}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all


.PHONY:			all clean fclean re
