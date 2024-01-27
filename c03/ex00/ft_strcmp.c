/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:12:53 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/24 23:29:07 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>
#include <string.h>

int main() 
{
    printf("Original: %d\n", strcmp("Hello", "Hello1"));
    printf("Original: %d\n", strcmp("World", "Hello"));
    printf("Original: %d\n", strcmp("0123456789", "Hello"));
    printf("Exercise: %d\n", ft_strcmp("Hello", "Hello1"));
    printf("Exercise: %d\n", ft_strcmp("World", "Hello"));
    printf("Exercise: %d\n", ft_strcmp("0123456789", "Hello"));

    return 0;
}*/
