# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 15:16:08 by fsoria            #+#    #+#              #
#    Updated: 2024/03/25 15:16:08 by fsoria           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

CFILES = ft_printf.c \
ft_libc/ft_handlers_a.c \
ft_libc/ft_handlers_b.c \
ft_libc/ft_putchar_fd.c \
ft_libc/ft_putstr_fd.c \
ft_libc/ft_putnbr_fd.c \
ft_libc/ft_putnbr_base_fd.c

OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

#rules
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re bonus