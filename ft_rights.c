/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rights.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:51:04 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/25 17:04:44 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_asignx(char **argv, int argc, int *x)
{
	x[0] = 0;
	x[2] = ft_right_b(argv, argc);
}

static int	ft_free_error(int *array, int *b)
{
	free (array);
	return (ft_err(1, b));
}

int	ft_right(char **argv, int argc, int *b)
{
	int	*array;
	int	x[3];

	ft_asignx(argv, argc, x);
	if (x[2] < 2)
		return (1);
	else
	{
		array = ft_recolect(argv, argc, x[2], b);
		if (!array)
			return (ft_err(1, b));
		while (array[x[0]] && x[0] < x[2])
		{
			x[1] = x[0] + 1;
			while (array[x[0]] != array[x[1]] && x[1] != x[2])
				x[1]++;
			if (array[x[1]] == array[x[0]] && x[1] != x[2])
				return (ft_free_error(array, b));
			else
				x[0]++;
		}
	}
	free (array);
	return (3);
}

static void	ft_takeing(char **argv, int *ar)
{
	while (argv[ar[0]][ar[1]] && argv[ar[0]][ar[1]] == ' ')
		ar[1]++;
	if (argv[ar[0]][ar[1]] && argv[ar[0]][ar[1]] == '-')
		ar[1]++;
	if (argv[ar[0]][ar[1]] >= '0' && argv[ar[0]][ar[1]] <= '9'
		&& argv[ar[0]][ar[1]])
	{
		ar[2]++;
		while (argv[ar[0]][ar[1]] >= '0' && argv[ar[0]][ar[1]] <= '9'
			&& argv[ar[0]][ar[1]])
			ar[1]++;
	}
}

int	ft_right_b(char **argv, int argc)
{
	int	ar[4];

	ar[3] = 0;
	ar[2] = 0;
	ar[0] = 0;
	while (ar[0] < argc && argv[ar[0]])
	{
		if (ar[3] == 0)
			ar[0]++;
		ar[1] = ar[3];
		if (ar[0] == argc)
			return (ar[2]);
		ft_takeing(argv, ar);
		if (argv[ar[0]][ar[1]] && argv[ar[0]][ar[1]] == ' ')
			ar[3] = ar[1];
		else if (argv[ar[0]][ar[1]])
			return (0);
		else
			ar[3] = 0;
	}
	return (ar[2]);
}
