/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:25 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/15 21:10:28 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

/*Create a function that return 1 if the string given as a parameter contains only alphabetical characters,and 0 if it contains any other character.*/ 

int	ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		i++;
		else
		return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char myString1[20] = "HelloWorld";
	char myString2[20] = "WorldHello";
	
	
	printf("%d\n", ft_str_is_alpha(myString1));
	printf("%d\n", ft_str_is_alpha(myString2));
	return (0);

}
