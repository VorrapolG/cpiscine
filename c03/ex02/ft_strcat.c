/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:21:46 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/23 20:31:03 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
    		*dest++;
	}
    	while (*src != '\0')
	{
    		*dest++ = *src++;
	}
	*dest = '\0';
	return dest;
}

#include <stdio.h>
#include <string.h>

int	main()
{
    	char str1[30] = "This and ";
	char str2[30] = "that";
    	char str3[30] = "This and ";
	char str4[30] = "that";
	printf("original: %s\n", strcat(str1, str2));
	printf("exercise: %s\n", ft_strcat(str3, str4));
	return (0);
}
