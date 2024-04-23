/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliares.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:27:42 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/12 12:02:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_pa(int	*x, int num)
{
	int	*pa;

	x[1] = 0;
	x[2] = 0;
	pa = malloc(sizeof(int) * num);
	return (pa);
}

unsigned int	*ft_re(int *x, unsigned int *y, int num)
{
	unsigned int	*re;

	*y = 0;
	*x = 0;
	re = malloc(sizeof(unsigned int) * num);
	if (!re)
		return (NULL);
	return (re);
}

unsigned int	**ft_combi(int *ab, int *x, int num)
{
	unsigned int	**combination;

	ab[0] = num;
	ab[1] = 0;
	*x = 0;
	combination = malloc(sizeof(void *) * 2);
	return (combination);
}

unsigned int	*ft_restocombi(int x, int num,
		unsigned int **combination, unsigned int *res)
{
	while (x < num)
	{
		combination[1][x] = '\0';
		x++;
	}
	return (res);
}

void	ft_rev_a_and_add(int *xy, unsigned int **combination, int num)
{
	reverse_a(combination, num);
	xy[1]++;
}
