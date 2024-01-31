#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
		index++;
	return (index);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		index;

	index = 0;
	while (str[index])
		index++;
	dest = (char *)malloc(sizeof(char) * (index + 1));
	index = 0;
	if (!(dest))
		return (NULL);
	while (str[index])
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			index;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock))
		return (NULL);
	index = 0;
	while (index < ac)
	{
		stock[index].size = ft_strlen(av[index]);
		stock[index].str = av[index];
		stock[index].copy = ft_strcpy(av[index]);
		index++;
	}
	stock[index].size = 0;
	stock[index].str = 0;
	stock[index].copy = 0;
	return (stock);
}
