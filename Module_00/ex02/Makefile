HEAD			=	Account.hpp

SRCS			=	Account.cpp test.cpp

OBJC			=	$(SRCS:%.cpp=%.o)

PROG_NAME		=	Account

GCC				=	c++

FLAGS			=	-std=c++98 -Wall -Wextra -Werror

all:			$(PROG_NAME)

%.o:			%.cpp $(HEAD)
				$(GCC) $(FLAGS) -c $< -o $@

$(PROG_NAME):	$(OBJC) $(HEAD) Makefile
				$(GCC) $(FLAGS) $(OBJC) -o $(PROG_NAME)

clean:		
				rm -r $(OBJC)

fclean:			clean
				rm -r $(PROG_NAME)

re:				fclean all

.PHONY:			all clean fclean re