/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numberic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:14:27 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 17:54:16 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that return 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.

int	ft_str_is_numberic(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		else
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char myString1[] = "56789";
	char myString2[] = "HelloWorld";
	char myString3[] = "";
	
	printf("%d\n", ft_str_is_numberic(myString1));
	printf("%d\n", ft_str_is_numberic(myString2));
	printf("%d\n", ft_str_is_numberic(myString3));
	
	return (0);
}
