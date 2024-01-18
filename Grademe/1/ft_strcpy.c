#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	printf("%s\n", str2);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
}	
