/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:20:53 by znichola          #+#    #+#             */
/*   Updated: 2022/06/18 08:20:57 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* This is only for functions that display something to the screen using write, 
 * they should all return void.
 */

// this comes from exercise code that has not been validated. 
// TODO: replace if you have moulinette valided code. 
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// code NOT validated by moulinette
// TODO: replace if you have moulinette valided code. 
void	ft_putdigit(int n)
{
	n %= 10;
	n += '0';
	write(1, &n, 1);
}

void	ft_putarray(int *a, int len)
{
	int	i;

	ft_putstr("[");
	i = -1;
	while (i++ < len)
	{
		ft_putdigit(a[i]);
		if (i < len)
		{
			ft_putstr(" ");
		}
	}
	ft_putstr("]\n");
}

void	ft_print_whole_puzzle(int size, int tab[size][size])
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
			ft_putdigit(tab[row][col]);
			ft_putstr(" ");
			col++;
		}
		ft_putstr("\n");
		row++;
	}
}

void	ft_print_solution(int size, int tab[size][size])
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
			if (row != 0 && row != 5 && col != 0 && col != 5)
			{
				ft_putdigit(tab[row][col]);
				ft_putstr(" ");
			}
			col++;
		}
		if (row != 0 && row < 4)
			ft_putstr("\n");
		row++;
	}
}
