/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:02:41 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/17 00:19:03 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *haystack, char *needle) {
    int i = 0, j = 0;

    if (needle[j] == '\0')
        return haystack;

    while (haystack[i] != '\0') {
        while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
            j++;

        if (needle[j] == '\0')
            return haystack + i;

        i++;
        j = 0;
    }

    return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
    	char haystack[] = "This is the way";
	char needle[] = "the";

	char *the = strstr(haystack, needle);
	printf ("the: %s\n", the);
	char *the2 = ft_strstr(haystack, needle);
	printf ("the2: %s\n", the2);

	char now[] = "now";
	char *fail = ft_strstr(haystack, now);
	
	if (fail == NULL)
	    printf("failed to find string!\n");
	return (0);
}
