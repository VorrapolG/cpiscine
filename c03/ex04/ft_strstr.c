/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:02:41 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/24 23:31:38 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*str && !*to_find)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s == *t && *s != '\0' && *t != '\0')
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{

	char str1[] = "Hello World This is the way";
	char str2[] = "World";
	printf("Original: %s\n", strstr(str1, str2));

	char str3[] = "";
	char str4[] = "";

	printf("Exercise: %s\n", ft_strstr(str3, str4));
	return (0);
}*/
