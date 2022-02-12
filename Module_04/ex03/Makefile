# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 11:49:29 by msalena           #+#    #+#              #
#    Updated: 2022/02/12 14:58:47 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Character.hpp AMateria.hpp MateriaSource.hpp \
					Cure.hpp Ice.hpp

SRCS		=		Character.cpp AMateria.cpp MateriaSource.cpp \
					Cure.cpp Ice.cpp main.cpp

OBGC		=		${SRCS:.cpp=.o}

DEPEN		=		${SRCS:.cpp=.d}

PROG_NAME	=		Game

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror -MMD

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} ${SRCS} Makefile
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${HEAD} ${SRCS} ${OBGC} Makefile
				${C} ${FLAGS} ${OBGC} -o ${PROG_NAME}

clean:
				rm -r ${OBGC} ${DEPEN}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fcelan re

-include		${DEPEN}
