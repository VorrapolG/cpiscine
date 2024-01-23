/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:12:53 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/23 19:58:13 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>

int main() 
{
    printf("Comparison Result: %d\n", ft_strcmp("Hello", "Hello1"));
    printf("Comparison Result: %d\n", ft_strcmp("Hello", "He"));
    printf("Comparison Result: %d\n", ft_strcmp("He", "Hello"));
    printf("Comparison Result: %d\n", ft_strcmp("Hello", "Hello"));

    return 0;
}*/
