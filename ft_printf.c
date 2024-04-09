/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:22:03 by fsoria            #+#    #+#             */
/*   Updated: 2024/03/25 15:22:03 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const t_handler	g_handlers[] = {
{'c', handle_char},
{'d', handle_int},
{'i', handle_int},
{'u', handle_uint},
{'x', handle_hex},
{'X', handle_hex_mayus},
{'p', handle_ptr},
{'s', handle_str},
{'%', handle_percent},
{'\0', NULL}
};

void	handle_format(char format, va_list args)
{
	int			j;

	j = 0;
	while (g_handlers[j].c != '\0')
	{
		if (g_handlers[j].c == format)
		{
			g_handlers[j].func(args);
			break ;
		}
		j++;
	}
}

int	ft_printf(char const *input, ...)
{
	int		i;
	va_list	args;

	va_start(args, input);
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			if (input[i] != 'c' && input[i] != 's' && input[i] != 'p' \
			&& input[i] != 'd' && input[i] != 'i' && input[i] != 'u' \
			&& input[i] != 'x' && input[i] != 'X' && input[i] != '%')
				return (-1);
			handle_format(input[i], args);
			i++;
		}
		else
		{
			ft_putchar_fd((char) input[i], 1);
			i++;
		}
	}
	va_end(args);
	return (0);
}
