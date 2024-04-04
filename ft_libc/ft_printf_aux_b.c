/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:12:39 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/03 17:12:39 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	handle_ptr(va_list args)
{
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_fd(va_arg(args, unsigned long), \
	"0123456789abcdef", 1);
}

void	handle_str(va_list args)
{
	char	*var_str;

	var_str = va_arg(args, char *);
	ft_putstr_fd (var_str, 1);
}

void	handle_percent(va_list args)
{
	(void)args;
	ft_putchar_fd('%', 1);
}
