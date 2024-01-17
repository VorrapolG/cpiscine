/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:18:19 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/17 16:57:50 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
	int ret1 = ft_str_is_printable("");
	int ret2 = ft_str_is_printable("AaBb");
	int ret3 = ft_str_is_printable("12345aAbB");
	int ret4 = ft_str_is_printable("\n");
	int ret6 = ft_str_is_printable("\xFF");
	int ret7 = ft_str_is_printable("0\0");
	int ret8 = ft_str_is_printable(" ");

	printf("Expect result : 1 1 1 0\n");
    	printf("User   result : %d %d %d %d\n",ret1,ret2,ret3,ret4);
	printf("Expect result : 0 1 1 \n");	
    	printf("User   result : %d %d %d\n",ret6,ret7,ret8);
   	return (0);
}*/
