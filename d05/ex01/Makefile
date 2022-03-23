NAME			=	forms
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98
SRCS			=	main.cpp Bureaucrat.cpp Form.cpp
HSRCS			= 	Bureaucrat.hpp Form.hpp

all		:	$(NAME) $(HSRCS)

$(NAME)	:	$(SRCS) $(HSRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"

re		:	clean all

.PHONY	:	re clean all
