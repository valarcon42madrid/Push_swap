/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:35:52 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/25 17:49:13 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_parseprecopy(int *a, int num)
{
	int	*pa;
	int	x[4];

	pa = ft_pa(x, num);
	if (!pa)
		return (NULL);
	while (x[1] != num)
	{
		x[3] = x[2];
		x[0] = a[x[2]];
		while (x[2] < num)
		{
			if (x[0] > a[x[2]])
			{
				x[0] = a[x[2]];
				x[3] = x[2];
			}
		x[2]++;
		}
		pa[x[1]] = x[0];
		a[x[3]] = 2147483647;
		x[2] = 0;
		x[1]++;
	}
	return (pa);
}

static unsigned int	*ft_parsed(int *pa, int *a, int num)
{
	int				x;
	unsigned int	*re;
	unsigned int	y;

	re = ft_re(&x, &y, num);
	while (y != (unsigned int)num && re)
	{
		while (pa[y] != a[x])
			x++;
		if (pa[y] == a[x])
		{
			re[x] = y + 1;
			x = 0;
			y++;
		}
	}
	x = 0;
	while (re && x + 1 != num && re[x] < re[x + 1])
		x++;
	free(pa);
	if (x + 1 == num)
		return (free_and_uinull(re));
	return (re);
}

static void	ft_resolve(unsigned int *res, int num)
{
	unsigned int	**combination;
	int				x;
	int				ab[2];

	combination = ft_combi(ab, &x, num);
	if (combination)
	{
		combination[1] = malloc(sizeof(int) * num);
		if (combination[1])
		{
			combination[0] = ft_restocombi(x, num, combination, res);
			if (ft_pseudocheckiforderer(combination, num) == 0)
			{
				if (num < 4)
					ft_pseudocheckiforderer(swap_a(combination), num);
				else if (num < 13)
					ft_miniresolve(combination, num, ab);
				else
					ft_highresolution(combination, num, ab);
			}
			free(combination[1]);
		}
		free(combination);
	}
	free(res);
}

static int	ft_maintwo(int *a, int argc, char **argv, int b)
{
	int				*pa;
	unsigned int	*res;

	pa = ft_parseprecopy(a, ft_right_b(argv, argc));
	if (pa == NULL)
	{
		free(a);
		return (ft_err(0, NULL));
	}
	else
	{
		free(a);
		a = ft_recolect(argv, argc, ft_right_b(argv, argc), &b);
		if (!a)
		{
			free(pa);
			return (0);
		}
	}	
	res = ft_parsed(pa, a, ft_right_b(argv, argc));
	free(a);
	if (res == NULL)
		return (ft_err(0, NULL));
	ft_resolve(res, ft_right_b(argv, argc));
	return (0);
}

int	main(int argc, char **argv)
{
	int				*a;
	int				b;

	b = 0;
	if (argc == 1)
		return (ft_err(0, &b));
	if (ft_voidarg(argc, argv) != 1 || ft_dobleright(argc, argv, &b) == 0)
		return (0);
	a = ft_recolect(argv, argc, ft_right_b(argv, argc), &b);
	if (!a)
		return (0);
	if (ft_repeat(a, ft_right_b(argv, argc)) == 0 || ft_letter(argc, argv) == 1)
		return (ft_err(1, &b));
	if (ft_right_b(argv, argc) == 2)
	{
		if (a[1] < a[0])
			ft_write("sa");
		else if (a[1] == a[0])
			ft_err(1, &b);
		free(a);
		return (0);
	}
	ft_maintwo(a, argc, argv, b);
	return (0);
}
