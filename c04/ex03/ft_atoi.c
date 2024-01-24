/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:15:49 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/24 23:25:49 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	negnbr;

	i = 0;
	nbr = 0;
	negnbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			negnbr++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (negnbr % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "42";
	printf("%d\n", ft_atoi(str1));
	return (0);
}*/
