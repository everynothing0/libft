#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 00:00:24 by cde-voog          #+#    #+#              #
#    Updated: 2023/04/17 00:23:16 by cde-voog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_arrlen.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putstr.c nb_abs.c ft_strcpy.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strmapi.c ft_strjoin.c ft_itoa.c ft_substr.c ft_strtrim.c ft_split.c x_calloc.c

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c free_stack.c

NAME = libft.a

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${BSRC:.c=.o}

.c.o	:
			gcc -Wall -Wextra -Werror -g -I . -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

all : ${NAME}

clean :
			rm -f ${OBJS} ${OBJS_BONUS}

fclean : clean
			rm -f ${NAME}

bonus : ${OBJS} ${OBJS_BONUS}
		ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}

re : fclean all
