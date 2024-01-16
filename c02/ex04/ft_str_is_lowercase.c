/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:34:38 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 14:48:32 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int index;
	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		else
		index++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char myString1[] = "helloworld";
	char myString2[] = "HelloWorld";
	char myString3[] = "";

	printf("%d\n", ft_str_is_lowercase(myString1));
	printf("%d\n", ft_str_is_lowercase(myString2));
	printf("%d\n", ft_str_is_lowercase(myString3));
	
	return (0);
}

