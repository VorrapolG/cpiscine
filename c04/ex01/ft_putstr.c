/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:09:47 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/24 23:28:00 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str++, 1);
	}
}

/*#include <stdio.h>
int main()
{
	char	*s;

	s = "hi!, Evaluator please be kind to me. i'm noob\n";
	ft_putstr(s);
	return (0);
}*/
