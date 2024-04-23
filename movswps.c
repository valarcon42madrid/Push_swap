/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movswps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:40:58 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 11:40:59 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	**swap_a(unsigned int **combination)
{
	unsigned int	aux;

	aux = combination[0][1];
	combination[0][1] = combination[0][0];
	combination[0][0] = aux;
	ft_write("sa");
	return (combination);
}

unsigned int	**swap_b(unsigned int **combination)
{
	unsigned int	aux;

	aux = combination[1][1];
	combination[1][1] = combination[1][0];
	combination[1][0] = aux;
	ft_write("sb");
	return (combination);
}
