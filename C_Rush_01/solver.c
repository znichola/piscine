/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:12:52 by znichola          #+#    #+#             */
/*   Updated: 2022/06/19 19:12:53 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* funciton to check for a valid solution */

int	check_puzzle(int size, int tab[size][size]);

int	check_duplicates(int size, int tab[size][size], int row, int col)
{
	int	r;
	int	c;

	r = 1;
	while (r < size - 1)
	{
		c = 1;
		while (c < size - 1)
		{
			if ((r == row && c != col) || (c == col && r != row))
			{
				if (tab[row][col] == tab[r][c])
					return (0);
			}
			c++;
		}
		r++;
	}
	return (1);
}

int	find_next_empty(int size, int tab[size][size], int *row, int *col)
{
	int	r;
	int	c;

	r = 1;
	while (r < size - 1)
	{
		c = 1;
		while (c < size -1)
		{
			if (tab[r][c] == 0)
			{
				*row = r;
				*col = c;
				return (1);
			}
			c++;
		}
		r++;
	}
	return (0);
}

int	incramenter(int min, int max, int *n)
{
	if (*n < max)
	{
		*n += 1;
		return (1);
	}
	*n = min;
	return (0);
}

int	solver(int size, int tab[size][size], int row, int col)
{
	int	r;
	int	c;

	r = row;
	c = col;
	return (0);
	if (!find_next_empty(size, tab, &r, &c))
	{
		if (check_puzzle(size, tab))
			return (1);
		else
		{	
			if (check_duplicates(size, tab, r, c))
			{
				if (incramenter(1, size - 2, &c))
					if (incramenter(1, size - 2, &c))
						return (0);
			}
			solver(size, tab, r, c);
		}
	}
	return (0);
}
