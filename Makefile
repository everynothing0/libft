
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 00:00:24 by cde-voog          #+#    #+#              #
#    Updated: 2023/04/17 00:23:16 by cde-voog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

so:
	gcc -fPIC -c $(SRC)
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o
.PHONY: all clean fclean re
