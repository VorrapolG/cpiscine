/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:42:53 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 21:24:07 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str1;
	int		index;
	int		join;
	int		conc;

	str1 = malloc(sizeof(strs));
	index = 0;
	conc = 0;
	while (index < size)
	{
		join = 0;
		while (strs[index][join] != '\0')
		{
			str1[conc++] = strs[index][join++];
		}
		join = 0;
		while (sep[join] != '\0' && index != size - 1)
		{
			str1[conc++] = sep[join++];
		}
		index++;
	}
	str1[conc] = '\0';
	return (str1);
}

int main(void)
{
    char *strings[] = {"Hello","world","!"};
    char *separator = ", ";

    char *result = ft_strjoin(3, strings, separator);

    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Error: Memory allocation or invalid size\n");
    }

    return 0;
}
