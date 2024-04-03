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
ft_libc/ft_isalnum.c \
ft_libc/ft_isalpha.c \
ft_libc/ft_isdigit.c \
ft_libc/ft_isprint.c \
ft_libc/ft_memset.c \
ft_libc/ft_strlen.c \
ft_libc/ft_bzero.c \
ft_libc/ft_memcpy.c \
ft_libc/ft_isascii.c \
ft_libc/ft_memmove.c \
ft_libc/ft_strlcpy.c \
ft_libc/ft_strlcat.c \
ft_libc/ft_toupper.c \
ft_libc/ft_tolower.c \
ft_libc/ft_strchr.c \
ft_libc/ft_strrchr.c \
ft_libc/ft_strncmp.c \
ft_libc/ft_memchr.c \
ft_libc/ft_memcmp.c \
ft_libc/ft_strnstr.c \
ft_libc/ft_atoi.c \
ft_libc/ft_calloc.c \
ft_libc/ft_strdup.c \
ft_libc/ft_substr.c \
ft_libc/ft_strjoin.c \
ft_libc/ft_strtrim.c \
ft_libc/ft_split.c \
ft_libc/ft_itoa.c \
ft_libc/ft_strmapi.c \
ft_libc/ft_striteri.c \
ft_libc/ft_putchar_fd.c \
ft_libc/ft_putstr_fd.c \
ft_libc/ft_putendl_fd.c \
ft_libc/ft_putnbr_fd.c \
ft_libc/ft_lstnew.c \
ft_libc/ft_lstadd_front.c \
ft_libc/ft_lstsize.c \
ft_libc/ft_lslast.c \
ft_libc/ft_lstadd_back.c \
ft_libc/ft_lstclear.c \
ft_libc/ft_lstiter.c \
ft_libc/ft_lstmap.c \
ft_libc/ft_lstdelone.c \
ft_libc/ft_putnbr_base_fd.c

OFILES = $(CFILES:.c=.o)

NAME = printf.a

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