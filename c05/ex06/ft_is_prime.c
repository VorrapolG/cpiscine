/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:05:53 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 02:15:11 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	while (i * i < (unsigned int)nb)
	{
		i++;
	}
	return ((int)i);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("2 is prime: %d\n", ft_is_prime(2));
	printf("4 is prime: %d\n", ft_is_prime(4));
	printf("5 is prime: %d\n", ft_is_prime(5));
	return (0);
}*/
