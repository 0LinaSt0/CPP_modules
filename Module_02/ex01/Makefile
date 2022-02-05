# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 16:31:30 by msalena           #+#    #+#              #
#    Updated: 2022/02/05 20:43:13 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Fixed.hpp

SRCS		=		main.cpp Fixed.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		Fixed

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} Makefile
				${C} ${FLAGS} -c $< -o $@

$(PROG_NAME):	${SRCS} ${OBJC} ${HEAD} Makefile
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re
