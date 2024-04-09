/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:15:44 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/09 09:36:03 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_handler
{
	char	c;
	void	(*func)(va_list args);
}	t_handler;

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_base_fd(unsigned long nbr, char *base, int fd);
void				handle_str(va_list args);
void				handle_hex_mayus(va_list args);
void				handle_hex(va_list args);
void				handle_uint(va_list args);
void				handle_int(va_list args);
void				handle_char(va_list args);
void				handle_ptr(va_list args);
void				handle_percent(va_list args);

#endif
