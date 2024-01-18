#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c ,1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i]){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return s1;
}

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	ft_strcpy(str1, str2);
	int i;
	i = 0;
	while (str1[i] != '\0'){
	ft_putchar(str1[i]);
	i++;
	}
	return 0;
}
