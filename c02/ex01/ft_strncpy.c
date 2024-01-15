/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:47:25 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/15 17:43:51 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

//char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char myString[30] = "Hello World!";
	char mDestination[30];
	ft_strncpy(mDestination, myString, 5);
	printf("%s\n", mDestination);
	return (0);
}


/*#include <stdio.h>
#include <string.h>

int	main()
{
	// '\0' is null terminator in order to outoput string properly
	// Testing how strcpy and strncpy function work
	char src[10] = "0123456789";
	
	char dest1[50];
	strcpy(dest1, src);
	printf("dest1: %s\n", dest1);
	
	char dest2[10];
	strncpy(dest2, src, 6);
	printf("dest2: %s\n", dest2);
	return (0);

}*/
