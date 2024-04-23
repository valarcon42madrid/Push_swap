/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extras.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:06:42 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/07 17:35:32 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_write(char *str)
{
	char	aux;

	while (*str)
	{
		aux = *str;
		write (1, &aux, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_checkiforderer(unsigned int **combination)
{
	int	x;

	x = 0;
	if (combination[1][0] == 0)
	{
		while (combination[0][x + 1]
			&& combination[0][x] < combination[0][x + 1])
			x++;
		if (!combination[0][x + 1])
			return (1);
	}
	return (0);
}

unsigned int	**ft_orderbyrotate(unsigned int **combination, int y, int num)
{
	while (y > 0)
	{
		combination = rotate_a(combination, num);
		y--;
	}
	return (combination);
}

unsigned int	**ft_orderbyreverse(unsigned int **combination, int y, int num)
{
	while (y > 0)
	{
		combination = reverse_a(combination, num);
		y--;
	}
	return (combination);
}

int	ft_pseudocheckiforderer(unsigned int **combination, int num)
{
	int	x;
	int	y;

	x = 1;
	while (x < num && combination[0][x - 1] < combination[0][x])
		x++;
	if (x == num)
		return (-1);
	else
		y = x + 1;
	while (y < num && combination[0][y - 1] < combination[0][y])
		y++;
	if (y == num && (combination[0][0] > combination[0][y - 1]))
	{
		if ((x) > (y - x))
			combination = ft_orderbyreverse(combination, (y - x), num);
		else
			combination = ft_orderbyrotate(combination, (x), num);
		return (1);
	}
	else
		return (0);
}
