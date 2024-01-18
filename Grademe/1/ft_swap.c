#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int a = 1;
	int b = 2;
	ft_swap(&a, &b);
	printf("a:%d b:%d",a ,b);
	return 0;
}
