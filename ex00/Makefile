# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 13:42:21 by msalena           #+#    #+#              #
#    Updated: 2022/01/26 14:20:43 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=		megaphone.cpp

OBJS		=		${SRCS:.cpp=.o}

PROG_NAME	=		megaphone

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			$(PROG_NAME)


%.o:			%.cpp
				$(GCC) $(FLAGS) -c $< -o $@

$(PROG_NAME):	$(OBJS) Makefile
				$(GCC) $(FLAGS) $(OBJS) -o $(PROG_NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(PROG_NAME)

re:				fclean all

.PHONY:			all clean fclean re

