/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 09:16:25 by znichola          #+#    #+#             */
/*   Updated: 2022/06/18 09:16:27 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putdigit(int n);

/* This is only for functions that return values, int, int *,  etc.
 * nothing should be displayed. 
 */

// code validated by moulinette
int	ft_ch_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	check_size(int *num)
{
	int	i;

	i = 0;
	while (num[i])
		i++;
	if (i == 1)
		return (1);
	if (i == 4)
		return (2);
	if (i == 9)
		return (3);
	if (i == 16)
		return (4);
	if (i == 25)
		return (5);
	if (i == 36)
		return (6);
	if (i == 49)
		return (7);
	if (i == 64)
		return (8);
	if (i == 81)
		return (9);
	return (0);
}

void	ft_fillarray_zeros(int size, int tab[size][size])
{
	int	i;
	int	row;
	int	col;

	row = 0;
	i = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			tab[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_reverse_row(int size, int *row)
{
	int	i;
	int	swap;

	i = 0;
	while (i <= (size - 1) / 2)
	{
		swap = row [i];
		row [i] = row[size - i - 1];
		row [size - i - 1] = swap;
		i ++;
	}
}
