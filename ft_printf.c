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
			if(input[i] == 'c')
			{
				ft_putchar_fd((char) va_arg(args, int), 1);
				i++;
			}
			else if(input[i] == 'd')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
				i++;
			}
			else if(input[i] == 'i')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
				i++;
			}
			else if(input[i] == 'u')
			{
				ft_putnbr_fd(va_arg(args, unsigned int), 1);
				i++;
			}
			else if(input[i] == 'x')
			{
				ft_putnbr_base_fd(va_arg(args, unsigned int), "0123456789abcdef", 1);
				i++;
			}
			else if(input[i] == 'X')
			{
				ft_putnbr_base_fd(va_arg(args, unsigned int), "0123456789ABCDEF", 1);
				i++;
			}
			else if(input[i] == 'p')
			{
				ft_putstr_fd("0x", 1);
				ft_putnbr_base_fd(va_arg(args, unsigned long), "0123456789abcdef", 1);
				i++;
			}
			else if(input[i] == '%')
			{
				ft_putchar_fd('%', 1);
				i++;
			}
			else if(input[i] == 's')
			{
				var_str = va_arg(args, char *);
				ft_putstr_fd(var_str, 1);
				i++;
			}
			
		}
		ft_putchar_fd((char) input[i], 1);
		i++;
		
	}
	va_end(args);
	return (0);
}