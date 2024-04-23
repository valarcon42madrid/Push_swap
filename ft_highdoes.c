/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highdoes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:20:08 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/13 12:30:55 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(unsigned int **combination, int num, int *ab)
{
	push_b(combination, num);
	ab[0]--;
	ab[1]++;
}

void	ft_reva_pusb(unsigned int **combination, int num, int *ab)
{
	reverse_a(combination, num);
	ft_push_b(combination, num, ab);
}

void	ft_push_a(unsigned int **combination, int num, int *ab)
{
	push_a(combination, num);
	ab[1]--;
	ab[0]++;
}

void	ft_pusa_reva(unsigned int **combination, int num, int *ab)
{
	push_a(combination, num);
	ab[1]--;
	ab[0]++;
	reverse_a(combination, num);
}

void	ft_pusa_swpa(unsigned int **combination, int num, int *ab)
{
	push_a(combination, num);
	ab[1]--;
	ab[0]++;
	swap_a(combination);
}
