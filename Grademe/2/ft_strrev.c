#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c ,1);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;
	
	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return str;
}

int	main(void)
{
	char str1[] = "Hello World";
	ft_strrev(str1);
	int i = 0;
	while (str1[i] != '\0')
	{
		ft_putchar(str1[i]);
		i++;
	}
	return 0;
}
