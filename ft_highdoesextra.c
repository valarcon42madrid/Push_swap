/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highdoesextra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:15:08 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/13 14:14:25 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_first_to_b(unsigned int **combination, int num, int *ab)
{
	if (ab[1] == 0 && combination[0][0] < combination[0][ab[0] - 1])
	{
		push_b(combination, num);
		ab[0]--;
		ab[1]++;
	}
	else if (ab[1] == 0)
	{
		reverse_a(combination, num);
		push_b(combination, num);
		ab[0]--;
		ab[1]++;
	}
}

void	ft_last_b(unsigned int **combination, int num, int *ab, int type)
{
	if ((type == 1 && combination[0][0] > combination[1][0])
		|| (type == -1 && combination[0][0] < combination[1][0]))
		ft_push_b(combination, num, ab);
	else if ((type == 1 && combination[0][0] > combination[1][1])
		|| (type == -1 && combination[0][0] < combination[1][1]))
	{
		push_b(combination, num);
		ab[0]--;
		ab[1]++;
		swap_b(combination);
	}
	else
	{
		push_b(combination, num);
		ab[0]--;
		ab[1]++;
		reverse_b(combination, num);
	}
}

void	ft_roa_swa_rea(unsigned int **combination, int num)
{
	rotate_a(combination, num);
	swap_a(combination);
	reverse_a(combination, num);
}

int	ft_type_and_order(unsigned int **combination, int num, int *ab, int type)
{
	if (type == 1 && combination[0][0] < combination[0][ab[0] - 1]
		&& combination[0][0] > combination[1][0])
		ft_push_b(combination, num, ab);
	else if (type == 1 && combination[0][0] > combination[0][ab[0] - 1]
		&& combination[0][ab[0] - 1] > combination[1][0])
		ft_reva_pusb(combination, num, ab);
	else if (type == 1 && combination[0][0] > combination[1][0]
			&& combination[0][ab[0] - 1] < combination[1][0])
		ft_push_b(combination, num, ab);
	else if (type == 1 && combination[1][0] < combination[0][ab[0] - 1])
		ft_reva_pusb(combination, num, ab);
	else if (type == -1 && combination[0][0] > combination[0][ab[0] - 1]
		&& combination[0][0] < combination[1][0])
		ft_push_b(combination, num, ab);
	else if (type == -1 && combination[0][0] < combination[0][ab[0] - 1]
		&& combination[0][ab[0] - 1] < combination[1][0])
		ft_reva_pusb(combination, num, ab);
	else if (type == -1 && combination[0][0] < combination[1][0]
		&& combination[0][ab[0] - 1] > combination[1][0])
		ft_push_b(combination, num, ab);
	else if (type == -1 && combination[0][ab[0] - 1] < combination[1][0])
		ft_reva_pusb(combination, num, ab);
	else
		return (-1);
	return (1);
}

void	ft_continue(unsigned int **combination, int num, int *ab)
{
	ft_antisuffle(combination, num, ab);
	if (ft_pseudocheckiforderer(combination, num) == 0)
		ft_highresolution(combination, num, ab);
}
