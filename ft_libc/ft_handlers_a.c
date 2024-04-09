/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:51:52 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/03 16:51:52 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	handle_char(va_list args)
{
	ft_putchar_fd ((char)va_arg(args, int), 1);
}

void	handle_int(va_list args)
{
	ft_putnbr_fd(va_arg(args, int), 1);
}

void	handle_uint(va_list args)
{
	ft_putnbr_fd(va_arg(args, unsigned int), 1);
}

void	handle_hex(va_list args)
{
	ft_putnbr_base_fd(va_arg(args, unsigned int), "0123456789abcdef", 1);
}

void	handle_hex_mayus(va_list args)
{
	ft_putnbr_base_fd(va_arg(args, unsigned int), "0123456789ABCDEF", 1);
}
