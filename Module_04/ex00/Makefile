# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 11:49:29 by msalena           #+#    #+#              #
#    Updated: 2022/02/09 13:00:23 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Animal.hpp Cat.hpp Dog.hpp \
					WrongAnimal.hpp WrongCat.hpp

SRCS		=		Animal.cpp Cat.cpp main.cpp Dog.cpp \
					WrongCat.cpp WrongAnimal.cpp

OBGC		=		${SRCS:.cpp=.o}

PROG_NAME	=		Animals

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
