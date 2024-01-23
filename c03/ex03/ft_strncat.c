/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:46:12 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/22 14:34:57 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    	char *pDest;

    	while (*dest != '\0'){
	    dest++;
	}
	while (nb-- > 0 && *src != '\0' (*dest++ = *src++));
	*dest = '\0';
	return pDest;
}

#include <stdio.h>
#include <string.h>

int main() 
{
    char dest[] = "Hello, ";
    char src[] = "world!";
    printf("original function: %s\n", strncat(dest, src, 3)); 
    char myDest[] = "Hello, ";
    char mySrc[] = "world!";
    printf("exercise function: %s\n", ft_strncat(myDest, mySrc, 3)); 
    return (0);
}
