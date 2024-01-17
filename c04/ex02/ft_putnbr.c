/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:18:06 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 15:04:19 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (nbl < 0 )
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl % 10)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i >= 0)
		write(1, &c[--i], 1);
}

int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	//2147483647 are the maximum integer data type = 4 bytes 
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
}

