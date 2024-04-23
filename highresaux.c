/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highresaux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:31:07 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/13 12:59:59 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_first_to_a(unsigned int **combination, int num, int *ab)
{
	if (ab[0] == 0 && combination[1][0] > combination[1][ab[1] - 1])
	{
		push_a(combination, num);
		ab[1]--;
		ab[0]++;
	}
	else if (ab[0] == 0)
	{
		reverse_b(combination, num);
		push_a(combination, num);
		ab[1]--;
		ab[0]++;
	}
}

void	ft_revb_pusa(unsigned int **combination, int num, int *ab)
{
	reverse_b(combination, num);
	push_a(combination, num);
	ab[1]--;
	ab[0]++;
}

void	ft_rob_swb_reb(unsigned int **combination, int num)
{
	rotate_b(combination, num);
	swap_b(combination);
	reverse_b(combination, num);
}

void	ft_last_a(unsigned int **combination, int num, int *ab, int type)
{
	if ((type == 1 && combination[1][0] > combination[0][0])
		|| (type == -1 && combination[1][0] < combination[0][0]))
		ft_push_a(combination, num, ab);
	else if ((type == 1 && combination[1][0] > combination[0][1])
		|| (type == -1 && combination[1][0] < combination[0][1]))
		ft_pusa_swpa(combination, num, ab);
	else
		ft_pusa_reva(combination, num, ab);
}

int	ft_order_and_type(unsigned int **combination, int num, int *ab, int type)
{
	if (type == -1 && combination[1][0] > combination[1][ab[1] - 1]
		&& combination[1][0] < combination[0][0])
		ft_push_a(combination, num, ab);
	else if (type == -1 && combination[1][0] < combination[1][ab[1] - 1]
		&& combination[1][ab[1] - 1] < combination[0][0])
		ft_revb_pusa(combination, num, ab);
	else if (type == -1 && combination[0][0] > combination[1][ab[1] - 1]
		&& combination[1][0] > combination[0][0])
		ft_revb_pusa(combination, num, ab);
	else if (type == -1 && combination[1][0] < combination[0][0])
		ft_push_a(combination, num, ab);
	else if (type == 1 && combination[1][0] < combination[1][ab[1] - 1]
		&& combination[1][0] > combination[0][0])
		ft_push_a(combination, num, ab);
	else if (type == 1 && combination[1][0] > combination[1][ab[1] - 1]
		&& combination[1][ab[1] - 1] > combination[0][0])
		ft_revb_pusa(combination, num, ab);
	else if (type == 1 && combination[1][0] > combination[0][0]
		&& combination[1][ab[1] - 1] < combination[0][0])
		ft_push_a(combination, num, ab);
	else if (type == 1 && combination[0][0] < combination[1][ab[1] - 1])
		ft_revb_pusa(combination, num, ab);
	else
		return (-1);
	return (1);
}
