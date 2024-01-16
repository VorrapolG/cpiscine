/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:46:51 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 22:27:22 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (*src)
	    *(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (dest);
}

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int     main(void)
{
	char dst[10];

	char *ret = ft_strcpy(dst,"abcdef");
	printf("Expect result : abcdef\n");
    	printf("User   result1: %s\n",dst);
    	printf("User   result2: %s\n",ret);
	
    	return (0);
}

