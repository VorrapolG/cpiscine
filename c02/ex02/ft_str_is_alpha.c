/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:25 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/23 19:53:41 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char myString1[20] = "HelloWorld";
	char myString2[20] = "World123Hello";
	char myString3[20] = "";	
	
	printf("%d\n", ft_str_is_alpha(myString1));
	printf("%d\n", ft_str_is_alpha(myString2));
	printf("%d\n", ft_str_is_alpha(myString3));
	return (0);
}*/
