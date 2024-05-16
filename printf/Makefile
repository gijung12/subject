# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yourintraname <yourintraname@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 14:50:06 by yourintrana       #+#    #+#              #
#    Updated: 2024/04/10 16:43:11 by yourintrana      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printaddress.c ft_printchar.c ft_printf.c ft_printhex.c \
ft_printint.c ft_printstr.c ft_putnbr_fd.c ft_unsignnbr.c 

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

AR = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o : %.c
	${CC} ${CFLAGS} -c -o $@ $<

${NAME}: ${OBJ}
	${AR} ${NAME} $(OBJ)

all:${NAME}

clean:
	${RM} ${OBJ}
fclean: clean
	${RM} ${NAME}
re:fclean all

.PHONY : all clean fclean re