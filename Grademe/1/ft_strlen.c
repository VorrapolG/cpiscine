#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello World";
	printf("%d\n", ft_strlen(str1));
	return 0;
}

