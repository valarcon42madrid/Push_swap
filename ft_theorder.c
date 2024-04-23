/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_theorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valarcon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:17:41 by valarcon          #+#    #+#             */
/*   Updated: 2022/04/07 11:17:42 by valarcon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_theordertolow(unsigned int **combination, int *ab, int num)
{
	int	r;
	int	rr;
	int	x;

	x = 1;
	while (combination[0][x - 1] > combination[0][x] && ab[0] > x)
		r = ++x;
	x = 1;
	while (combination[0][ab[0] - x] > combination[0][ab[0] - x - 1]
		&& ab[0] > x)
		rr = ++x;
	if (rr != 1 && r != 1)
	{
		if (r <= rr && ab[0] > rr)
		{
			while (combination[0][0] > combination[0][1])
				rotate_a(combination, num);
		}
		else if (ab[0] > r && r > rr)
		{
			while (combination[0][ab[0] - 1] > combination[0][ab[0] - 2])
				reverse_a(combination, num);
			reverse_a(combination, num);
		}
	}
}

void	ft_theordertohigh(unsigned int **combination, int *ab, int num)
{
	int	r;
	int	rr;
	int	x;

	x = 1;
	while (combination[1][x - 1] < combination[1][x] && ab[1] > x)
		r = ++x;
	x = 1;
	while (combination[1][ab[1] - x] < combination[1][ab[1] - x - 1]
		&& ab[1] > x)
		rr = ++x;
	if (rr != 1 && r != 1)
	{
		if (r <= rr && ab[1] > rr)
		{
			while (combination[1][0] < combination[1][1])
				rotate_b(combination, num);
		}
		else if (ab[1] > r && rr < r)
		{
			while (combination[1][ab[1] - 1] < combination[1][ab[1] - 2])
				reverse_b(combination, num);
			reverse_b(combination, num);
		}
	}
}

void	ft_theorderb(unsigned int **combination, int *ab, int num)
{
	int	r;
	int	rr;
	int	x;

	x = 1;
	while (combination[1][x - 1] > combination[1][x] && ab[1] > x)
		r = ++x;
	x = 1;
	while (combination[1][ab[1] - x] > combination[1][ab[1] - x - 1]
		&& ab[1] > x)
		rr = ++x;
	if (rr != 1 && r != 1)
	{
		if (r <= rr && ab[1] > rr)
		{
			while (combination[1][0] > combination[1][1])
				rotate_b(combination, num);
		}
		else if (ab[1] > r && r > rr)
		{
			while (combination[1][ab[1] - 1] > combination[1][ab[1] - 2])
				reverse_b(combination, num);
			reverse_b(combination, num);
		}
	}
}

void	ft_theordera(unsigned int **combination, int *ab, int num)
{
	int	r;
	int	rr;
	int	x;

	x = 1;
	while (combination[0][x - 1] < combination[0][x] && ab[0] > x)
		r = ++x;
	x = 1;
	while (combination[0][ab[0] - x] < combination[0][ab[0] - x - 1]
		&& ab[0] > x)
		rr = ++x;
	if (rr != 1 && r != 1)
	{
		if (r <= rr && ab[0] > rr)
		{
			while (combination[0][0] < combination[0][1])
				rotate_a(combination, num);
		}
		else if (ab[0] > r && rr < r)
		{
			while (combination[0][ab[0] - 1] < combination[0][ab[0] - 2])
				reverse_a(combination, num);
			reverse_a(combination, num);
		}
	}
}
