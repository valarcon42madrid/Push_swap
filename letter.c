/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:37:38 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/25 18:37:40 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_auxnorm(int *x, int *y, int *bol, char **mode)
{
	if (mode == 0)
	{
		*bol = 0;
		*x = 0;
		*y = 1;
	}
	else if (mode != NULL)
	{
		if (mode[*y][*x] != '-')
			(*bol) = 0;
		(*x)++;
	}
}

static int	ft_checkmod(char **argv, int x, int y, int mode)
{
	if (mode == 0)
	{
		if (argv[y][x] == ' ' || argv[y][x] == '-'
			|| (argv[y][x] > '/' && argv[y][x] < ':'))
			return (1);
		else
			return (0);
	}
	else if (mode == 1)
	{
		if (!argv[y][x + 1] || argv[y][x + 1] < '0'
			|| argv[y][x + 1] > '9')
			return (1);
		else
			return (0);
	}
	return (0);
}

static void	ft_normaux(int *y, int *x, char **argv)
{
	if (!argv[*y][*x] && ft_checkmod(argv, *x, *y, 0) != 1)
	{
		(*y)++;
		(*x) = 0;
	}
}

int	ft_letter(int argc, char **argv)
{
	int	x;
	int	y;
	int	bol;

	ft_auxnorm(&x, &y, &bol, (char **) NULL);
	while (y != argc)
	{
		if (ft_checkmod(argv, x, y, 0) == 1)
		{
			if (bol == 0 && (argv[y][x] == '-'))
			{
				if (ft_checkmod(argv, x, y, 1) == 1)
					return (1);
				bol = 1;
			}
			else if (bol == 1 && (argv[y][x] == '-'))
				return (1);
			ft_auxnorm(&x, &y, &bol, argv);
		}
		else if (argv[y][x])
			return (1);
		ft_normaux(&y, &x, argv);
	}
	return (0);
}

int	ft_voidarg(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y != argc)
	{
		if (argv[y][0])
			y++;
		else
			return (ft_err(1, &x));
	}
	return (1);
}
