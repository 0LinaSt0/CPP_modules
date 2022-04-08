# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 17:41:03 by msalena           #+#    #+#              #
#    Updated: 2022/04/08 19:56:35 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDR				=	Array.hpp

SRCS			=	main.cpp

TPP				=	Array.tpp

OBJC			=	${SRCS:.cpp=.o} #${TPP:.tpp=.o}

PROG_NAME		=	./Template

C				=	c++

FLAGS			=	-std=c++98 -Wall -Wextra -Werror


all:				${PROG_NAME}

%.o:				%.cpp ${TPP} ${HDR} ${SRCS} Makefile
					${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:		${OBJC} ${SRCS}
					${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:				
					rm -f ${OBJC}

fclean:				clean
					rm -f ${PROG_NAME}

re:					fclean all

.PHONE:				all clean fclean re
