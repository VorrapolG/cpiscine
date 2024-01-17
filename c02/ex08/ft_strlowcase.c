/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:10:05 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 16:58:56 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int     main(void)
{
	char *retr;
	char str[255];
        char *str0 = "BBBbbb CCCCCC AaAaAa";
	printf("Expect result : 0 bbbbbb cccccc aaaaaa\n");
	strcpy(str,str0);
	retr = ft_strlowcase(str);
	printf("User   result : %d %s\n",(int)(str-retr),str);
    	return (0);
}*/
