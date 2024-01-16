/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:47:25 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 22:30:58 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    	int	i;
	i = 0 ;
	while (*src && n)
	{
	    *(dest + i++) = *src++;
	    --n;
	}
	if (n--)
	    *(dest + i++) = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int     main(void)
{
	char dstr[10];
	char dst[10];

	char *retr = strncpy(dstr,"abcdef",sizeof(dstr));
	char *ret = ft_strncpy(dst,"abcdef",sizeof(dst));
	printf("Expect result : 0 abcdef 0 0 0 0\n");
    	printf("Real   result : %d %s %d %d %d %d\n",(int)(dstr-retr),dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",(int)(dst-ret),dst,dst[6],dst[7],dst[8],dst[9]);
	// abcdef
	retr = strncpy(dstr,"1234",3); // dest=abcdef, src=1234, n = 3
	ret = ft_strncpy(dst,"1234",3);
	printf("Expect result : 0 123def 0 0 0 0\n");
    	printf("Real   result : %d %s %d %d %d %d\n",(int)(dstr-retr),dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",(int)(dst-ret),dst,dst[6],dst[7],dst[8],dst[9]);
	// 123def
	retr = strncpy(dstr,"ABCD",5);
	ret = ft_strncpy(dst,"ABCD",5);
	printf("Expect result : 0 ABCD 0 0 0 0\n");
    	printf("Real   result : %d %s %d %d %d %d\n",(int)(dstr-retr),dstr,dstr[6],dstr[7],dstr[8],dstr[9]);
    	printf("User   result : %d %s %d %d %d %d\n",(int)(dst-ret),dst,dst[6],dst[7],dst[8],dst[9]);

    	return (0);
}

