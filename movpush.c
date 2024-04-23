/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movpush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:26:37 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 11:26:39 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	**push_b(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = 0;
	aux = combination[0][0];
	while (combination[0][x + 1] && x + 1 < num)
	{
		combination[0][x] = combination[0][x + 1];
		x++;
	}
	combination[0][x] = '\0';
	x = num - 1;
	while (!combination[1][x])
		x--;
	combination[1][x + 1] = combination[1][x];
	while (x > 0)
	{
		combination[1][x] = combination[1][x - 1];
		x--;
	}
	combination[1][0] = aux;
	ft_write("pb");
	return (combination);
}

unsigned int	**push_a(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = 0;
	aux = combination[1][0];
	while (combination[1][x + 1] && x + 1 < num)
	{
		combination[1][x] = combination[1][x + 1];
		x++;
	}
	combination[1][x] = '\0';
	x = num - 1;
	while (!combination[0][x])
		x--;
	combination[0][x + 1] = combination[0][x];
	while (x > 0)
	{
		combination[0][x] = combination[0][x - 1];
		x--;
	}
	combination[0][0] = aux;
	ft_write("pa");
	return (combination);
}
