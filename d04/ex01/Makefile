# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 07:14:13 by abel-haj          #+#    #+#              #
#    Updated: 2022/03/20 07:14:13 by abel-haj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	brain
CC				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98
SRCS			=	main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp
HSRCS			= 	Animal.hpp Brain.hpp Cat.hpp Dog.hpp

all		:	$(NAME)

$(NAME)	:	$(SRCS) $(HSRCS)
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME) && echo "\033[1;33mCompiled $(NAME)\033[0m"

clean	:
	@/bin/rm -f $(NAME) && echo "\033[1;31mRemoved executable\033[0m"

re		:	clean all

.PHONY	:	re clean all
