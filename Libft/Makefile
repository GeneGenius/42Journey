# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eugeneadugyamfi <eugeneadugyamfi@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 15:22:44 by eadu-gya          #+#    #+#              #
#    Updated: 2023/11/19 04:06:24 by eugeneadugy      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c ft_memcpy.c \
ft_strlcpy.c ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \

BONUS = ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstadd_front.c \
ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstsize.c \

HEADER = libft.h

OBJECTS = $(SOURCES:.c=.o)

OBJSBONUS = ${BONUS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJECTS}
					ar rcs ${NAME} ${OBJECTS}

bonus: ${OBJSBONUS}
					ar rcs ${NAME}  ${OBJSBONUS}

all: $(NAME)

clean: 
				${RM} ${OBJECTS} ${OBJSBONUS} $(NAME)

fclean: clean
				${RM} ${NAME}

re:				fclean all

.PHONY: all, bonus, clean, fclean, re
