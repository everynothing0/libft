
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 00:00:24 by cde-voog          #+#    #+#              #
#    Updated: 2023/04/17 00:23:16 by cde-voog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc
CFLAG = -Wall -Werror -Wextra
SRC = ft_*.c
MAINFILE = main.c
OUTPUT = -o tests
LIBRARY = rc libft.a ft_*.o
NAME = libft.a
OBJ = $(SRC:.c=.o)

CLEANCMD = rm -rf *.o
FCLEANCMD = rm -rf *.a


#compile all ft at once and put ion a library
$(NAME):$(OBJ)
	$(COMPILE) $(CFLAG) -c $(SRC)
	ar rcs libft.a ft_*.o

all:$(NAME)

#to compile only one ft at the time
%.o:%.c
	$(COMPILE) $(CFLAG) -c $< -o $@

#clear all lib file
clean:
	$(CLEANCMD)

#clear all .o file
fclean: clean
	$(FCLEANCMD)

re: fclean all
