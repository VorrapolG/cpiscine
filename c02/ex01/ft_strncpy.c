/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:47:25 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 16:50:45 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	if (n--)
		*(dest + i++) = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int     main(void)
{
	char src[30] = "0123456789";
	char dest1[50];
	strncpy(dest1, src, 6);
	printf("dest1: %s\n", dest1);

    	return (0);
}*/
