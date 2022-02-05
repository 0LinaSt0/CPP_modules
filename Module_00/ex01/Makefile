# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 14:57:11 by msalena           #+#    #+#              #
#    Updated: 2022/02/05 20:41:03 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=		PhoneBook.hpp

SRCS		=		PhoneBook.cpp SearchContacts.cpp WorkWithContacts.cpp

OBJS		=		${SRCS:.cpp=.o}

PROG_NAME	=		PhoneBook

C			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			$(PROG_NAME)

%.o:			%.cpp $(HEAD) Makefile
				$(C) $(FLAGS) -c $< -o $@

$(PROG_NAME):	$(OBJS) $(HEAD) Makefile
				$(C) $(FLAGS) $(OBJS) -o $(PROG_NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(PROG_NAME)

re:				fclean all

.PHONY:			all clean fclean re
