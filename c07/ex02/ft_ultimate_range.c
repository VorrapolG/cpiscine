/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:35:47 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/28 20:40:40 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ulti_range;
	int	index;

	index = 0;
	ulti_range = (int *)malloc(sizeof(int) * (max - min));
	*range = ulti_range;
	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (ulti_range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		ulti_range[index] = min;
		min++;
		index++;
	}
	return (index);
}

/*#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min = 9;
    int max = 60;
    int *result;
    int size = ft_ultimate_range(&result, min, max);

    if (size == -1)
    {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Error: Invalid range\n");
        return 1;
    }
    printf("Generated array:\n");
    int i = 0;
    while (i < size)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    free(result); // Don't forget to free the allocated memory
    return 0;
}*/
