# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 13:42:21 by msalena           #+#    #+#              #
#    Updated: 2022/01/26 14:00:19 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=		megaphone.cpp

OBJS		=		${SRCS:.c=.o}

PROG_NAME	=		megaphone

GCC			=		c++

FLAGS		=		-std=c++98 -Wall -Wextra -Werror

all:			$(PROG_NAME)

%.o:			%.c
				$(GCC) $(FLAGS)

$(PROG_NAME):	$(OBJS) Makefile
				$(GCC) $(FLAGS) $(SRCS) -o $(PROG_NAME)

clean:
				rm -rf $(OBJS)

