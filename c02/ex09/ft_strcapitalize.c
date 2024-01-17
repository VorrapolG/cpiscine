/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:57 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 17:00:17 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*v;

	v = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		if (!((*(str - 1) >= '0' && *(str - 1) <= '9')
				|| (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
				|| (*(str - 1) >= 'a' && *(str - 1) <= 'z')))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		}
		++str;
	}
}
return v;

/*#include <stdio.h>
#include <string.h>


int     main(void)
{
	char retr[30];
        char *str = "aaa 42bbb -ccc +DDD";
	printf("Expect result :Aaa 42Bbb -Ccc +Ddd\n");
	strcpy(retr, str);
	ft_strcapitalize(retr);
	printf("User   result : %s\n",retr);
    	return (0);
}*/
