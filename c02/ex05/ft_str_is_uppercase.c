/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:49:03 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 16:56:34 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char myString1[] = "AAAAA";
	char myString2[] = "aaaaa";
	char myString3[] = "";
	
	printf("%d\n", ft_str_is_uppercase(myString1));
	printf("%d\n", ft_str_is_uppercase(myString2));
	printf("%d\n", ft_str_is_uppercase(myString3));
	return (0);
}*/
