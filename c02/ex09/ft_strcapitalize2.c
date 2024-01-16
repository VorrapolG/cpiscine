/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:38:19 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 19:42:43 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_alpnbr(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    if (c >= 'a' && c <= 'z')
        return 2;
    if (c >= 'A' && c <= 'Z')
        return 3;
    return 0;
}

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;  // Capitalize the first letter
        }
        else if (ft_alpnbr(str[i - 1]) == 0 && ft_alpnbr(str[i]) == 2)
        {
            str[i] -= 32;  // Capitalize after non-alphabetic characters if the current character is a lowercase letter
        }
        else if (ft_alpnbr(str[i - 1]) > 0 && ft_alpnbr(str[i]) == 3)
        {
            str[i] += 32;  // Convert to lowercase after uppercase letters if the current character is an uppercase letter
        }
        i++;
    }

    return str;
}

#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "ABCsalut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";

	printf("Expect result : 0 Abcsalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un$\n");

	strcpy(str,str0);
	retr = ft_strcapitalize(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}
