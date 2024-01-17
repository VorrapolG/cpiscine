/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:57:17 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/17 17:12:27 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}

/*#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int     main(void)
{
	char dstr[10];
	char dst[10];
	strncpy(dstr,"0123456789",sizeof(dstr));
	strncpy(dst,"0123456789",sizeof(dstr));
	int retr = strlcpy(dstr,"abcdef",sizeof(dstr));
	int ret = ft_strlcpy(dst,"abcdef",sizeof(dst));
    	printf("Real   result : %d %s %d %d \n",retr,dstr,dstr[2],dstr[3]);
    	printf("User   result : %d %s %d %d \n",ret,dst,dst[2],dst[3]);
    	return (0);
}*/
