/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:34:12 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/15 13:58:38 by vgundtha         ###   ########.fr       */
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

	while (*str != '\0')
	{
		next_char = *str;
		ft_putchar(next_char);
		str++;
	}
}

/*int	main(void)
{
	ft_putstr("Hello World");
	ft_putchar('\n');
	return (0);
}*/
