/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:46:51 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/15 15:02:27 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *str)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i]
		i++
	}
	dest[i] != '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char myString[30];
	char mDestination[30];
	myString = "Hello World";
	ft_strcpy(mDestination, myString);
	printf("%s\n", mDestination);
	return (0);
}

