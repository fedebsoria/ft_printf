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

#include "printf.h"

int ft_printf(char const * input, ...)
{   
	int i;
	char *var_str;
	va_list args;
	va_start(args, input);

	i = 0;
	while(input[i] != '\0')
	{
		if(input[i] == '%')
		{
			i++;
			if(input[i] == 's')
			{
				var_str = va_arg(args, char *);
				printf("var_str: %s\n", var_str);
				printf("ft_strlen: %d\n", ft_strlen(var_str));
				ft_putstr_fd(var_str, 1);
				i++; // Increment the input pointer
			}
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