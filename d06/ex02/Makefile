NAME			=	type
SRCS			=	main.cpp Base.cpp
FLAGS			=	-Wall -Wextra -Werror -std=c++98
CC				=	c++

all:	$(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "Compilation succeeded" || echo "Compilation failed"

clean:
	@rm -f $(NAME) && echo "Cleaned $(NAME)"

re: clean all

.PHONY: all clean re