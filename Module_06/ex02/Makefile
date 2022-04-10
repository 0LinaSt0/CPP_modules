# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 11:11:59 by msalena           #+#    #+#              #
#    Updated: 2022/04/03 13:57:52 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDR			=	Base.hpp

SRC			=	main.cpp BaseUtils.cpp

OBJC		=	${SRC:.cpp=.o}

PROG_NAME	=	./Casting

C			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror


all:			${PROG_NAME}

%.o:			%.cpp ${HDR}
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${SRC} ${HDR} ${OBJC} Makefile
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:	
				rm -f ${OBJC}

fclean:			clean
				rm -f ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re