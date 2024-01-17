/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:34:38 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 16:55:10 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		else
			str++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char myString1[] = "helloworld";
	char myString2[] = "HelloWorld";
	char myString3[] = "";

	printf("%d\n", ft_str_is_lowercase(myString1));
	printf("%d\n", ft_str_is_lowercase(myString2));
	printf("%d\n", ft_str_is_lowercase(myString3));
	
	return (0);
}*/
