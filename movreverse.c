/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movreverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:07:34 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 12:07:36 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	**reverse_a(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = num - 1;
	while (combination[0][x] == 0)
		x--;
	aux = combination[0][x];
	while (x > 0)
	{
		combination[0][x] = combination[0][x - 1];
		x--;
	}
	combination[0][0] = aux;
	ft_write("rra");
	return (combination);
}

unsigned int	**reverse_b(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = num - 1;
	while (combination[1][x] == 0)
		x--;
	aux = combination[1][x];
	while (x > 0)
	{
		combination[1][x] = combination[1][x - 1];
		x--;
	}
	combination[1][0] = aux;
	ft_write("rrb");
	return (combination);
}

unsigned int	**reverse_ab(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = num - 1;
	while (combination[0][x] == 0)
		x--;
	aux = combination[0][x];
	while (x > 0)
	{
		combination[0][x] = combination[0][x - 1];
		x--;
	}
	combination[0][0] = aux;
	x = num - 1;
	while (combination[1][x] == 0)
		x--;
	aux = combination[1][x];
	while (x > 0)
	{
		combination[1][x] = combination[1][x - 1];
		x--;
	}
	combination[1][0] = aux;
	ft_write("rrr");
	return (combination);
}
