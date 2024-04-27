/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:30:35 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/25 17:24:35 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_repeat(int *a, int num)
{
	int	x;
	int	aux;
	int	y;

	x = 0;
	while (x < num)
	{
		aux = a[x];
		y = x + 1;
		while (y < num)
		{
			if (aux == a[y])
				return (0);
			else
				y++;
		}
		x++;
	}
	return (1);
}

int	ft_err(int e, int *b)
{
	if (e == 0)
		return (0);
	else if (e == 1)
	{
		if (*b == 0)
		{
			write(2, "Error\n", 6);
			*b = 1;
		}
		return (0);
	}
	return (0);
}

unsigned int	*free_and_uinull(unsigned int	*re)
{
	free(re);
	return (NULL);
}

void	ft_nextar(int *xya)
{
	xya[0]++;
	xya[3] = 0;
	xya[1]++;
}

int	ft_dobleright(int argc, char **argv, int *b)
{
	if (ft_right(argv, argc, b) == 0)
		return (ft_err(1, b));
	if (ft_right(argv, argc, b) == 1)
		return (ft_err(ft_letter(argc, argv), b));
	return (4);
}
