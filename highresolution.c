/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highresolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:14:07 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/13 14:14:11 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_highresolution(unsigned int **combination, int num, int *ab)
{
	if (combination[0][ab[0] - 1] > combination[0][ab[0] - 2])
	{
		if (combination[0][0] > combination[0][1])
			ft_theordertolow(combination, ab, num);
		else
		{
			while (combination[0][0] < combination[0][1] && ab[0] > 1)
				ft_push_b(combination, num, ab);
			ft_push_b(combination, num, ab);
		}
	}
	else if (combination[0][ab[0] - 1] < combination[0][ab[0] - 2])
	{
		if (combination[0][0] > combination[0][1])
		{
			while (combination[0][ab[0] - 1] < combination[0][ab[0] - 2]
					&& ab[0] > 1)
				ft_reva_pusb(combination, num, ab);
			ft_reva_pusb(combination, num, ab);
		}
	}
	ft_suffle(combination, num, ab);
}

void	ft_antifinishing(unsigned int **combination, int num, int *ab)
{
	int	type;

	type = -1;
	if (ab[1] != 0)
		ft_first_to_a(combination, num, ab);
	while (ab[1] != 0)
	{
		if (ab[1] == 1)
			ft_last_a(combination, num, ab, type);
		else if (ab[1] > 4 && combination[1][0] < combination[1][1]
				&& combination[1][1] > combination[1][2] && type == 1
				&& combination[1][2] < combination[1][3]
				&& (combination[1][2] > combination[1][0]
				|| combination[1][1] < combination[1][3]))
			ft_rob_swb_reb(combination, num);
		else if (ab[1] > 4 && combination[1][0] > combination[1][1]
				&& combination[1][1] < combination[1][2] && type == -1
				&& combination[1][2] > combination[1][3]
				&& (combination[1][2] < combination[1][0]
					|| combination[1][1] > combination[1][3]))
			ft_rob_swb_reb(combination, num);
		else
			type *= ft_order_and_type(combination, num, ab, type);
	}
}

void	ft_antisuffle(unsigned int **combination, int num, int *ab)
{
	if (combination[1][ab[1] -1] < combination[1][ab[1] - 2])
	{
		if (combination[1][0] > combination[1][1])
		{
			while (combination[1][0] > combination[1][1] && ab[1] > 1)
				ft_push_a(combination, num, ab);
			ft_push_a(combination, num, ab);
		}
		else
			ft_theordertohigh(combination, ab, num);
	}
	else if (combination[1][ab[1] -1] > combination[1][ab[1] - 2])
	{
		if (combination[1][0] < combination[1][1])
		{
			while (combination[1][ab[1] - 1] > combination[1][ab[1] - 2]
				&& ab[1] > 1)
				ft_revb_pusa(combination, num, ab);
			ft_revb_pusa(combination, num, ab);
		}
	}
	ft_antifinishing(combination, num, ab);
}

void	ft_suffle(unsigned int **combination, int num, int *ab)
{
	int	type;

	type = 1;
	if (ab[0] != 0)
		ft_first_to_b(combination, num, ab);
	while (ab[0] != 0)
	{
		if (ab[0] == 1)
			ft_last_b(combination, num, ab, type);
		else if (ab[0] > 4 && combination[0][0] < combination[0][1]
			&& combination[0][1] > combination[0][2] && type == 1
			&& combination[0][2] < combination[0][3]
			&& (combination[0][2] > combination[0][0]
			|| combination[0][1] < combination[0][3]))
			ft_roa_swa_rea(combination, num);
		else if (ab[0] > 4 && combination[0][0] > combination[0][1]
			&& combination[0][1] < combination[0][2] && type == -1
			&& combination[0][2] > combination[0][3]
			&& (combination[0][2] < combination[0][0]
			|| combination[0][1] > combination[0][3]))
			ft_roa_swa_rea(combination, num);
		else
			type *= ft_type_and_order(combination, num, ab, type);
	}
	ft_continue(combination, num, ab);
}
