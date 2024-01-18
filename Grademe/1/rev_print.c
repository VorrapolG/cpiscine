#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


char	*ft_rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(str[i]);
	}
	write (1, "\n", 1);	
	return 0;
}

#include <stdio.h>
			
int	main(void)
{
	char str1[] ="Hello World";
	ft_rev_print(str1);
	printf("dlroW olleH\n");
	return 0;
}	

