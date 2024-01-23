/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:30:49 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/21 18:29:27 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	viewable_double(int table[4][4], int position, int result)
{
	int	i;

	i = 0;
	while (i <= position / 4 && table[i][position % 4] != result)
	{
		i++;
	}
	if (i <= position / 4)
	{
		return (1);
	}
	i = 0;
	while (i <= position % 4 && table[position / 4][i] != result)
	{
		i++;
	}
	if (i <= position % 4)
	{
		return (1);
	}
	return (0);
}

int	viewable_up(int table[4][4], int position, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4 && (position / 4 == 3))
	{
		if (table[i][position % 4] > max)
		{
			max = table[i][position % 4];
			count++;
		}
		i++;
	}
	if (position / 4 == 3 && input[position % 4] != count)
	{
		return (1);
	}
	return (0);
}

int	viewable_down(int table[4][4], int position, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0 && (position / 4 == 3))
	{
		if (table[i][position % 4] > max)
		{
			max = table[i][position % 4];
			count++;
		}
		i--;
	}
	if (position / 4 == 3 && input[4 + position % 4] != count)
	{
		return (1);
	}
	return (0);
}

int	viewable_left(int table[4][4], int position, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4 && (position % 4 == 3))
	{
		if (table[position / 4][i] > max)
		{
			max = table[position / 4][i];
			count++;
		}
		i++;
	}
	if (position % 4 == 3 && input[8 + position / 4] != count)
	{
		return (1);
	}
	return (0);
}

int	viewable_right(int table[4][4], int position, int input[16])
{
	int	i;
	int	max;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	while (--i >= 0 && (position % 4 == 3))
	{
		if (table[position / 4][i] > max)
		{
			max = table[position / 4][i];
			count++;
		}
	}
	if (position % 4 == 3 && input[12 + position / 4] != count)
	{
		return (1);
	}
	return (0);
}
