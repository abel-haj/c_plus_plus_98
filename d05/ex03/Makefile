NAME			=	work
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98
SRCS			=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
HSRCS			= 	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

all		:	$(NAME) $(HSRCS)

$(NAME)	:	$(SRCS) $(HSRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"
	@/bin/rm -f *_shrubbery && echo "\033[1;31mRemoved unnecessary files\033[0m"

re		:	clean all

.PHONY	:	re clean all
