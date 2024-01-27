/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:38:39 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/24 21:36:47 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[30] = "Hello World";
	printf("%d\n", ft_strlen(str1));
	return (0);
}*/
