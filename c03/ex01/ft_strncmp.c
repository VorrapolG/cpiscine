/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:19:19 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/23 20:06:10 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (*s1 || *s2))
	{
		if (*s1 < *s2)
			return (-1);
		if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main() 
{
	printf("Original: %d\n", strncmp("Hello2", "Hello1", 6));
	printf("Exercise: %d\n", ft_strncmp("Hello2", "Hello1", 6));
	return 0;
}*/
