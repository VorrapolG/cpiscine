/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:48:58 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 22:46:32 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char myString1[] = "56789";
	char myString2[] = "HelloWorld";
	char myString3[] = "";
	
	printf("%d\n", ft_str_is_numeric(myString1));
	printf("%d\n", ft_str_is_numeric(myString2));
	printf("%d\n", ft_str_is_numeric(myString3));
	
	return (0);
}*/
