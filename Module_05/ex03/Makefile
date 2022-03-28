# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msalena <msalena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 19:34:36 by msalena           #+#    #+#              #
#    Updated: 2022/03/28 17:04:00 by msalena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEAD		=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp PresidentialPardonForm.hpp \
				Intern.hpp

SRCS		=	Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp \
				Intern.cpp main.cpp

OBJC		=	${SRCS:.cpp=.o}

PROG_NAME	=	Bureaucrat

C			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror


all:			${PROG_NAME}

%.o:			%.cpp 
				${C} ${FLAGS} -c $< -o $@

${PROG_NAME}:	${SRCS} ${HEAD} ${OBJC} Makefile
				${C} ${FLAGS} ${OBJC} -o ${PROG_NAME}

clean:			
				rm -f ${OBJC}

fclean:			clean
				rm -f ${PROG_NAME} *_shrubbery

re:				fclena all

.PHONY:			all clean fclean re