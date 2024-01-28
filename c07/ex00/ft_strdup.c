/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:38:26 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 19:43:12 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	int		length;
	char	*dest;

	length = 0;
	while (src[length] != '\0')
		length++;
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (0);
	index = 0;
	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[30] = "Hello World!";
	printf("ft_strdups: %s\n", ft_strdup(str1));
	return (0);
}*/
