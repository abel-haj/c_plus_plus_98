NAME			=	interface
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra
STDFLAGS		=	-std=c++11
SRCS			=	main.cpp MateriaSource.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp
HSRCS			= 	IMateriaSource.hpp MateriaSource.hpp AMateria.hpp ICharacter.hpp Character.hpp Ice.hpp Cure.hpp

all		:	$(NAME) $(HSRCS)

$(NAME)	:	$(SRCS) $(HSRCS)
	@$(CC) $(CPPFLAGS) $(STDFLAGS) $(DFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"

re		:	clean all

.PHONY	:	re clean all
