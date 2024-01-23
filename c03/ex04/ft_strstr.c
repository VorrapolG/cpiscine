/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:02:41 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/23 19:29:06 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	const char *a;
	const char *b;

	if(*to_find == '\0')
	return (char *)str;

	while	(*str != '\0')
	{
		a = str;
		b = to_find;
		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (char *)str;
		str++;
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{

	char str1[] = "Hello World This is the way";
	char str2[] = "World";
	printf("Original: %s\n", strstr(str1, str2));

	char str3[] = "Hello World This is the way ";
	char str4[] = "World";

	printf("Exercise: %s\n", ft_strstr(str3, str4));
	return (0);
}
