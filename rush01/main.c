/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:32:39 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/21 18:28:06 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdlib.h>

int	solve(int table[4][4], int position, int input[16])
{
	int	result;

	while (position < 16)
	{
		result = 1;
		while (result <= 4)
		{
			if (viewable_double(table, position, result) == 0)
			{
				table[position / 4][position % 4] = result;
				if (viewable_condition(table, position, input) == 0)
				{
					if (solve(table, position + 1, input) == 1)
						return (1);
				}
				else
				{
					table[position / 4][position % 4] = 0;
				}
			}
			result++;
		}
		return (0);
	}
	return (1);
}

void	display_solution(int table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(table[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	int	*input;
	int	table[4][4];

	if (ac != 2 || ft_strlen(av[1]) != 31)
	{
		ft_putstr("Error\n");
		return (0);
	}
	input = get_numbers(av[1]);
	if (input == NULL || solve(table, 0, input) != 1)
		ft_putstr("Error\n");
	else
		display_solution(table);
	free(input);
	return (0);
}
