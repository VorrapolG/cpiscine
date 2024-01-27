/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:46:12 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/24 18:01:18 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (nb-- && *src != '\0')
	{
		*dest_ptr++ = *src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[30] = "I'm, ";
    char str2[30] = "NOOB";
    char str3[30] = "I'm, ";
    char str4[30] = "NOOB";
    printf("original function: %s\n", strncat(str1, str2, 4)); 
    printf("exercise function: %s\n", ft_strncat(str3, str4, 4)); 
    return (0);
}*/
