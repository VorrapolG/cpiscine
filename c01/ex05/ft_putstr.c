/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:34:12 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/14 10:52:57 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next_char;

	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			break ;
		}
		ft_putchar(next_char);
		str++;
	}
}
