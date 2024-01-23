/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgundtha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:39:29 by vgundtha          #+#    #+#             */
/*   Updated: 2024/01/21 17:07:28 by vgundtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH01_H
# define RUSH01_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_putnbr(int nb);
int		viewable_double(int table[4][4], int position, int result);
int		viewable_up(int table[4][4], int position, int input[16]);
int		viewable_down(int table[4][4], int position, int input[16]);
int		viewable_left(int table[4][4], int position, int input[16]);
int		viewable_right(int table[4][4], int position, int input[16]);
int		*get_numbers(char *str);
int		viewable_condition(int table[4][4], int position, int input[16]);

#endif
