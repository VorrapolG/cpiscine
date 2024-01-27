/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:59:01 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 01:10:23 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("2 power of 6 : %d\n", ft_iterative_power(2, 6));
	return (0);
}*/
