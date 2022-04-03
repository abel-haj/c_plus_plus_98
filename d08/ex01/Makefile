NAME		=	ex01
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror
CSTD		=	-std=c++98
SRCS		=	main.cpp Span.cpp
HEADERS		=	Span.hpp

all:	$(NAME)

$(NAME): $(SRCS) $(HEADERS)
	@$(CC) $(FLAGS) $(CSTD) $(SRCS) -o $(NAME) && echo "Compilation succeeded" || echo "Compilation failed"

clean:
	@rm -f $(NAME) && echo "Cleaned $(NAME)"

re: clean all

.PHONY: all clean re
