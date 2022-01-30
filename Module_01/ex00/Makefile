# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 14:08:41 by msalena           #+#    #+#              #
#    Updated: 2022/01/30 14:28:21 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Zombie.hpp

SRCS		=		Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		Zombie

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror



all:			Zombie

%.o:			%.cpp ${HEAD}
				${GCC} ${FLAGS} -c $< -o $@

$(PROG_NAME):	${SRCS} ${OBJC} ${HEAD} Makefile
				${GCC} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re




