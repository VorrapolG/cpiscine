/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:45:46 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 20:36:16 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr_range;
	int	index;
	int	range;

	index = 0;
	range = max - min;
	if (range <= 0)
	{
		return (NULL);
	}
	ptr_range = (int *)malloc(sizeof(int) * (range));
	while (min < max)
	{
		ptr_range[index] = min;
		min++;
		index++;
	}
	return (ptr_range);
}

/*#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int min = 0;
    int max = 10;
    int *result = ft_range(min, max);
    if (result == NULL)
    {
        printf("Error: Invalid range or memory allocation failed\n");
        return 1;
    }
    printf("Generated array:\n");
    int i = 0;
    while (i < max - min)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    free(result);
    return 0;
}*/
