/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:57 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 01:41:42 by vgundthahome     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char *ft_strcapitalize(char *str) {
    // Save the original pointer for returning at the end
    char *v = str;

    // Capitalize the first character if it is a lowercase letter
	if (*str >= 'a' && *str <= 'z')
        *str -= 32;
	
    // Move to the next character
    ++str;

    // Iterate through the rest of the string
    while (*str) {
        // Convert uppercase letters to lowercase
        if (*str >= 'A' && *str <= 'Z'){
            *str += 32;
	}
        // Check if the previous character is not a digit or a letter
        if (!( (*(str - 1) >= '0' && *(str - 1) <= '9') ||
               (*(str - 1) >= 'A' && *(str - 1) <= 'Z') ||
               (*(str - 1) >= 'a' && *(str - 1) <= 'z') ))
        {
            // Check if the current character is a lowercase letter
            if (*str >= 'a' && *str <= 'z')
                *str -= 32;
        }

        // Move to the next character
        ++str;
    }

    // Return the original pointer
    return v;
}

#include <stdio.h>
#include <string.h>


int     main(void)
{
	char *retr;

	char str[255];
	char str2[255];

        char *str0 = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
        char *str1 = "AAAaAaAa bbbbbBBBB CcCcCcC";
	
	printf("Expect result : 0 Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un$\n");
        
	strcpy(str,str0);
	strcpy(str,str1);
	retr = ft_strcapitalize(str);
	retr = ft_strcapitalize(str2);
	printf("User   result : %d %s$\n",(int)(str-retr),str);
	printf("User   result : %s\n",str2);

    	return (0);
}
