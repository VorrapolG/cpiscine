/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:38:11 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 17:08:53 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	char *retr;
	char str[255];
        char *str0 = "AAAaaa bbbBBB CCCCCC";
	printf("Expect result : 0 AAAAAA BBBBBB CCCCCC");
	strcpy(str,str0);
	retr = ft_strupcase(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}*/
