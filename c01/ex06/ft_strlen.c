/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:36:12 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/15 13:57:46 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	char myString[] = "Hello, World!";
	int length = ft_strlen(myString);
	printf("%d\n", length);
	return (0);
}*/
