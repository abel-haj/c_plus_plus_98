NAME		=		scavtrap
CC			=		g++
CPPFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRC			=		main.cpp ClapTrap.cpp ScavTrap.cpp

all:			$(NAME)

$(NAME): $(SRC)
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean:
		@/bin/rm -rf $(NAME) *.replace 2&> /dev/null && echo "\033[1;31mRemoved object files\033[0m"

re:			clean all

.PHONY:		all clean
