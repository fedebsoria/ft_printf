/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:45:13 by fsoria            #+#    #+#             */
/*   Updated: 2024/04/03 14:45:13 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(unsigned long nbr, char *base, int fd)
{
	unsigned long	base_len;
	char			c;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (nbr >= base_len)
	{
		ft_putnbr_base_fd(nbr / base_len, base, fd);
	}
	c = base[nbr % base_len];
	write(fd, &c, 1);
}
