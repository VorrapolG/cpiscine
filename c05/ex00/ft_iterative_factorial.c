/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:49:57 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 00:37:13 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}

/*#include <unistd.h>
#include <stdio.h>

int	main()
{
	//result = 1 * 4 nb = 4--; result = 1 * 3 .. 
	//while nb = 0 return 1;
	printf("factorial of -1: %d\n", ft_iterative_factorial(-1));
	printf("factorial of 0: %d\n", ft_iterative_factorial(0));
	printf("factorial of 1: %d\n", ft_iterative_factorial(1));
	printf("factorial of 2: %d\n", ft_iterative_factorial(2));
	printf("factorial of 3: %d\n", ft_iterative_factorial(3));
	printf("factorial of 4: %d\n", ft_iterative_factorial(4));
	return (0);
}*/
