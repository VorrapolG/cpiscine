/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:09:58 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/21 17:29:50 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdlib.h>

int	*get_numbers(char *str)
{
	int	*puzzle;
	int	i;
	int	j;

	i = 0;
	j = 0;
	puzzle = malloc(sizeof(int) * 16);
	if (!puzzle)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			puzzle[j] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
	return (puzzle);
}

int	viewable_condition(int table[4][4], int position, int input[16])
{
	return ((viewable_up(table, position, input) == 1)
		|| (viewable_down(table, position, input) == 1)
		|| (viewable_left(table, position, input) == 1)
		|| (viewable_right(table, position, input) == 1));
}
