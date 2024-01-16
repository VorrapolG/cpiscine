/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:57 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/16 19:43:04 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_alpnbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (ft_alpnbr(str[i - 1]) == 0 && ft_alpnbr(str[i]) == 2)
			str[i] -= 32;
		if (ft_alpnbr(str[i - 1]) > 0 && ft_alpnbr(str[i]) == 3)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);


 22 }int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	
	printf("Expect result : 0 Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un$\n");
        
	strcpy(str,str0);
	retr = ft_strcapitalize(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}*/

/*int	main()
{
	char abc[] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf("%s\n", abc);
	ft_strcapitalize(abc);
	printf("%s\n", abc);
	return (0);
}*/
