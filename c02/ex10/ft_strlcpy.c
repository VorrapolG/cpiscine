/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:57:17 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/16 22:40:24 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int len;

    len = 0;
    while (*(src + len) && --size)
	*dest++ = *(src + len++);
    *dest = '\0';
    while (*(src + len))
	++len;
    return (len);
}

#include <stdio.h>
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
    	printf("Real   result : %d %s %d %d %d %d\n",retr,dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",ret,dst,dst[6],dst[7],dst[8],dst[9]);

	retr = strlcpy(dstr,"1234",3);
	ret = ft_strlcpy(dst,"1234",3);
    	printf("Real   result : %d %s %d %d %d %d\n",retr,dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",ret,dst,dst[6],dst[7],dst[8],dst[9]);

	retr = strlcpy(dstr,"a1234",0);
	ret = ft_strlcpy(dst,"a1234",0);
    	printf("Real   result : %d %s %d %d %d %d\n",retr,dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",ret,dst,dst[6],dst[7],dst[8],dst[9]);

	retr = strlcpy(dstr,"",3);
	ret = ft_strlcpy(dst,"",3);
    	printf("Real   result : %d %s %d %d %d %d\n",retr,dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",ret,dst,dst[6],dst[7],dst[8],dst[9]);

	retr = strlcpy(dstr,"ABCD",10);
	ret = ft_strlcpy(dst,"ABCD",10);
    	printf("Real   result : %d %s %d %d %d %d\n",retr,dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",ret,dst,dst[6],dst[7],dst[8],dst[9]);

    	return (0);
}

