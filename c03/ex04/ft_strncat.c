/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:46:12 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/16 23:53:23 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    	char *pDest;

    	while (*dest){
	    dest++;
	}
	while (nb-- > 0 && (*dest++ = *src++));
	*dest = '\0';
	return pDest;
}

#include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    ft_strncat(dest, src, 3);  // Concatenate only the first 3 characters of src
    printf("%s\n", dest);  // Output: Hello, wor
    return 0;
}
