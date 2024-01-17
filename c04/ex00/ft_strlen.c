/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:38:39 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 14:08:30 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	// accumilate length
	int	size;

	size = 0;
	// arithmatic operation
	while (*(str + size))
	// post fix opterator
		++size;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	char *s;

	s = "hi!";
	printf("%d\n", ft_strlen(s));
}
