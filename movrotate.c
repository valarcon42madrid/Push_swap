/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:44:27 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 11:44:28 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	**rotate_a(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = 0;
	aux = combination[0][0];
	while (combination[0][x + 1] != 0 && x + 1 < num)
	{
		combination[0][x] = combination[0][x + 1];
		x++;
	}
	combination[0][x] = aux;
	ft_write("ra");
	return (combination);
}

unsigned int	**rotate_b(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = 0;
	aux = combination[1][0];
	while (combination[1][x + 1] != 0 && x + 1 < num)
	{
		combination[1][x] = combination[1][x + 1];
		x++;
	}
	combination[1][x] = aux;
	ft_write("rb");
	return (combination);
}

unsigned int	**rotate_ab(unsigned int **combination, int num)
{
	unsigned int	aux;
	int				x;

	x = 0;
	aux = combination[0][0];
	while (combination[0][x + 1] != 0 && x + 1 < num)
	{
		combination[0][x] = combination[0][x + 1];
		x++;
	}
	combination[0][x] = aux;
	x = 0;
	aux = combination[1][0];
	while (combination[1][x + 1] != 0 && x + 1 < num)
	{
		combination[1][x] = combination[1][x + 1];
		x++;
	}
	combination[1][x] = aux;
	ft_write("rr");
	return (combination);
}
