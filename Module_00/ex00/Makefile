# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 13:42:21 by msalena           #+#    #+#              #
#    Updated: 2022/01/27 18:41:27 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		megaphone.hpp

SRCS		=		megaphone.cpp

OBJS		=		${SRCS:.cpp=.o}

PROG_NAME	=		megaphone

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			$(PROG_NAME)


%.o:			%.cpp $(HEAD)
				$(GCC) $(FLAGS) -c $< -o $@

$(PROG_NAME):	$(OBJS) $(HEAD) Makefile
				$(GCC) $(FLAGS) $(OBJS) -o $(PROG_NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(PROG_NAME)

re:				fclean all

.PHONY:			all clean fclean re

