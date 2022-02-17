NAME			=	abstract
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98
SRCS			=	main.cpp AAnimal.cpp Brain.cpp Cat.cpp Dog.cpp
HSRCS			= 	AAnimal.hpp Brain.hpp Cat.hpp Dog.hpp

all		:	$(NAME) $(HSRCS)

$(NAME)	:	$(SRCS) $(HSRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"

re		:	clean all
	./$(NAME)

.PHONY	:	re clean all
