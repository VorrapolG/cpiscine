/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundthahome <vgundthahome.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 00:02:41 by vgundthahome      #+#    #+#             */
/*   Updated: 2024/01/18 03:11:07 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    if (to_find[j] == '\0')
        return str;

    while (str[i] != '\0')
    {
        int initial_i = i;  // Store the initial value of i

        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;

        if (to_find[j] == '\0')
            return str + initial_i;  // Return the starting position of the match

        i = initial_i + 1;  // Move to the next character in str
        j = 0;              // Reset the index for to_find
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
    	char haystack[] = "This is the way";
	char needle[] = "i";
	printf("Original string: %s\n", haystack);
	printf("Sting to find: %s\n", needle);
	char *the = strstr(haystack, needle);
	printf ("strstr: %s\n", the);
	char *the2 = ft_strstr(haystack, needle);
	printf ("ft_strstr: %s\n", the2);
	char now[] = "now";
	char *fail = ft_strstr(haystack, now);
	printf("If fail to find string: ");	
	if (fail == 0)
	    printf("failed to find string!\n");
	return (0);
}
