char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
				str[i] -= 32;
			    i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int     main(void)
{
	char *retr;

	char str[255];

        char *str0 = "-+salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	
	printf("Expect result : 0 -+Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un$\n");
        
	strcpy(str,str0);
	retr = ft_strcapitalize(str);
	printf("User   result : %d %s$\n",(int)(str-retr),str);

    	return (0);
}
