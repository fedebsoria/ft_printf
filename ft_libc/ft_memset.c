/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:15:27 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/07 17:16:17 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int x, int unsigned n)
{
	unsigned int	i;
	char			*char_ptr;

	if (x > 255 || x < -128)
		x = x % 256;
	char_ptr = (char *)ptr;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = x;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	char *test;
	test = "Hola, mundo.";
	printf("%s", test);
	ft_memset(test, '$', 3);
	printf("%s", test);

	return (0);
} */