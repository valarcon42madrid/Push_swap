/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:00:02 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/14 12:43:04 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	asigner(int *xya)
{
	xya[0] = 0;
	xya[1] = 1;
	xya[2] = 0;
	xya[3] = 0;
	xya[4] = 0;
	return ('\0');
}

static void	ft_auxiliar(int *xya, char **argv, int *res)
{
	if (argv[xya[1]][xya[3] + ft_numlen(res[xya[0]]) + 1])
	{
		if (argv[xya[1]][xya[3]] == '0')
		{
			while (argv[xya[1]][xya[3]] == '0')
				xya[3]++;
			if (argv[xya[1]][xya[3]] < '0'
				|| argv[xya[1]][xya[3]] > '9' || !argv[xya[1]][xya[3]])
				xya[3]--;
		}
		else if (argv[xya[1]][xya[3]] == '-')
		{
			while (argv[xya[1]][xya[3] + 1] == '0')
				xya[3]++;
			if (argv[xya[1]][xya[3] + 1] < '0'
				|| argv[xya[1]][xya[3] + 1] > '9' || !argv[xya[1]][xya[3] + 1])
				xya[3]--;
		}
		xya[3] += ft_numlen(res[xya[0]]) + 1;
		xya[0]++;
	}
	else
		ft_nextar(xya);
}

static void	ft_reset(int *xya)
{
	xya[3] = 0;
	xya[1]++;
}

static int	*ft_freenull(int *b, int *res)
{
	free(res);
	ft_err(1, b);
	return (NULL);
}

int	*ft_recolect(char **argv, int argc, int num, int *b)
{
	int	*res;
	int	xya[5];

	res = malloc((num + 1) * sizeof(int));
	if (!res)
		return (NULL);
	res[num] = asigner(xya);
	while (xya[0] != num && xya[1] != argc)
	{
		while (argv[xya[1]][xya[3]] && argv[xya[1]][xya[3]] == ' ')
			xya[3]++;
		if (argv[xya[1]][xya[3]] && (argv[xya[1]][xya[3]] == '-'
			|| (argv[xya[1]][xya[3]] >= '0' && argv[xya[1]][xya[3]] <= '9')))
		{
			if (ft_atoi(&(argv[xya[1]][xya[3]]), (xya + 4)) == 0
				&& xya[4] == 69)
				return (ft_freenull(b, res));
			res[xya[0]] = ft_atoi(&(argv[xya[1]][xya[3]]), (xya + 4));
			ft_auxiliar(xya, argv, res);
		}
		else
			ft_reset(xya);
	}
	return (res);
}		
