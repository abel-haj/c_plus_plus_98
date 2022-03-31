NAME		=	iter
SRCS		=	main.cpp
HEADERS		=	iter.hpp
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "Compilation succeeded" || echo "Compilation failed"

clean:
	@rm -f $(NAME) && echo "Cleaned $(NAME)"

re: clean all

.PHONY: all clean re
