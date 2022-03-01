NAME		=		guns
CC			=		c++
CPPFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRC			=		main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all:			$(NAME)

$(NAME): $(SRC)
		@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean:
		@/bin/rm -rf $(NAME) 2&> /dev/null && echo "\033[1;31mRemoved object files\033[0m"

re:			clean all

.PHONY:		all clean re
