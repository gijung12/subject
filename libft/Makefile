# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gijung <gijung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 21:19:46 by gijung            #+#    #+#              #
#    Updated: 2024/03/24 14:09:00 by gijung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strchr.c ./ft_strdup.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_tolower.c ./ft_toupper.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c

SRC_BNS =  ./ft_lstnew.c ./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstlast.c ./ft_lstadd_back.c ./ft_lstdelone.c ./ft_lstclear.c ./ft_lstiter.c ./ft_lstmap.c

OBJS = ${SRC:.c=.o}

OBJS_BNS = ${SRC_BNS:.c=.o}

NAME = libft.a

AR = ar rcs

RM = rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
    OBJ = $(OBJS) $(OBJS_BNS)
else
    OBJ = $(OBJS)
endif

%.o : %.c
	${CC} ${CFLAGS} -c $<

${NAME}: ${OBJ}
	${AR} ${NAME} $^

all:${NAME}

bonus:
	make WITH_BONUS=1 all

clean:
	${RM} ${OBJS} ${OBJS_BNS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY.: all clean fclean re bonus
