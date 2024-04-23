/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniresolutions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:04:23 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 12:04:25 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_pusher_b(unsigned int **combination, int num, int *ab, int mode)
{
	if (mode == 1)
	{
		push_a(combination, num);
		ab[1]--;
		ab[0]++;
	}
	else
	{
		push_b(combination, num);
		ab[0]--;
		ab[1]++;
	}
}

static unsigned int	ft_asignthelower(int *xy,
		unsigned int **combination, int *ab)
{
	unsigned int	aux;

	aux = 2147483647;
	xy[0] = 0;
	xy[2] = 0;
	while (xy[0] != ab[0])
	{
		if (aux > combination[0][xy[0]])
		{
			aux = combination[0][xy[0]];
			xy[1] = xy[0];
		}
		xy[0]++;
	}
	return (aux);
}

static void	ft_twolinesatone(int *xy, unsigned int **combination,
		int *ab, int num)
{
	ft_pusher_b(combination, num, ab, '\0');
	xy[2] = 1;
}

static void	ft_take_path(int *xy, unsigned int **combination, int *ab, int num)
{
	unsigned int	aux;

	aux = ft_asignthelower(xy, combination, ab);
	if (xy[1] < ab[0] - xy[1] - 1)
	{
		while (xy[1] != 0)
		{
			if (ab[0] > 4 && combination[0][0] == aux + 1)
				ft_twolinesatone(xy, combination, ab, num);
			else
				rotate_a(combination, num);
			xy[1]--;
		}
	}
	else
	{
		xy[0] = ab[0];
		while (xy[1] != xy[0])
		{
			if (ab[0] > 4 && combination[0][0] == aux + 1)
				ft_twolinesatone(xy, combination, ab, num);
			else
				ft_rev_a_and_add(xy, combination, num);
		}
	}
}

void	ft_miniresolve(unsigned int **combination, int num, int *ab)
{
	int	xy[3];

	while (ab[0] != 3)
	{
		ft_take_path(xy, combination, ab, num);
		ft_pusher_b(combination, num, ab, '\0');
		if (xy[2] == 1)
		{
			swap_b(combination);
			xy[2] = 0;
		}
	}
	if (ft_pseudocheckiforderer(combination, 3) == 0)
		ft_pseudocheckiforderer(swap_a(combination), 3);
	while (ab[1] != 0)
		ft_pusher_b(combination, num, ab, 1);
}
