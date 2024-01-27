/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:50:05 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 02:05:28 by vgundtha         ###   ########.fr       */
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
	if (i * i == (unsigned int)nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

/*#include <stdio.h>

int	main(void)
{
	printf("sqrt of 9: %d\n", ft_sqrt(9));
	printf("sqrt of 6: %d\n", ft_sqrt(6));
	printf("sqrt of 3: %d\n", ft_sqrt(3));
	return (0);
}*/
