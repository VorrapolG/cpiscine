/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:19:19 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/24 15:35:31 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main() 
{
	printf("Original: %d\n", strncmp("Hello1", "Hello2", 6));
	printf("Original: %d\n", strncmp("World0123", "World", 6));
	printf("Original: %d\n", strncmp("0123456789", "012345", 6));
	printf("Exercise: %d\n", ft_strncmp("Hello1", "Hello2", 6));
	printf("Exercise: %d\n", ft_strncmp("World0123", "World", 6));
	printf("Exercise: %d\n", ft_strncmp("0123456789", "012345", 6));
	return 0;
}*/
