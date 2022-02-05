# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 14:08:41 by msalena           #+#    #+#              #
#    Updated: 2022/02/05 20:42:59 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		Karen.hpp

SRCS		=		main.cpp Karen.cpp

OBJC		=		${SRCS:.cpp=.o}

PROG_NAME	=		karenFilter

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			${PROG_NAME}

%.o:			%.cpp ${HEAD} Makefile
				${C} ${FLAGS} -c $< -o $@

$(PROG_NAME):	${OBJC} ${HEAD} Makefile
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:
				rm -r ${OBJC}

fclean:			clean
				rm -r ${PROG_NAME}

re:				fclean all

.PHONY:			all clean fclean re




