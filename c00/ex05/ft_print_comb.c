/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 08:44:12 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/14 11:24:57 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, char c, char check)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (check)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	check;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				check = !(a == '7' && b == '8' && c == '9');
				ft_write_comb(a, b, c, check);
				c++;
			}
			b++;
		}
		a++;
	}
}
