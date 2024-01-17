/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:02:41 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/17 21:21:20 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find) {
    int i = 0, j = 0;

    if (to_find[j] == '\0')
        return str;

    while (str[i] != '\0') {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;

        if (to_find[j] == '\0')
            return str + i;

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
