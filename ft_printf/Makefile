# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: genegyamfi <genegyamfi@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 10:54:40 by genegyamfi        #+#    #+#              #
#    Updated: 2024/07/20 20:31:45 by genegyamfi       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CFLAGS	=	-Wall -Werror -Wextra

CC		=	cc

RM		=	rm -f

SRC		=	ft_printhex.c	\
			ft_pointer.c ft_pr_string.c	\
			ft_pr_unsigned.c	\
			ft_printf.c ft_put_char.c	\
			ft_putnbr.c  \

OBJS 		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)
fclean:
		@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re