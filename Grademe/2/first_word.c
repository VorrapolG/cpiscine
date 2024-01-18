#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char **av)
{
	int i;

	i = 0;
	//Skip leading spaces or tabs
	while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
		i++;
	//Print characters until a space or tab is encountered
	while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
	{	
		ft_putchar(av[1][i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av);
	ft_putchar('\n');
	return 0;
}
