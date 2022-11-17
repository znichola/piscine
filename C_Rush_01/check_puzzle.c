/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:38:54 by znichola          #+#    #+#             */
/*   Updated: 2022/06/19 17:40:22 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* code related to checking if a puzzle input is valid*/

void	ft_reverse_row(int size, int *row);

void	mirror(int size, int tab[size][size])
{
	int	r;

	r = 0;
	while (r < size)
	{
		ft_reverse_row(size, tab[r]);
		r++;
	}
}

void	transpose(int size, int tab[size][size])
{
	int	c;
	int	r;
	int	trans[4][4];

	c = 0;
	while (c < size)
	{
		r = -1;
		while (r++ < size)
			trans[c][r] = tab[r][c];
		c++;
	}
	c = 0;
	while (c < size)
	{
		r = -1;
		while (r++ < size)
			tab[c][r] = trans[c][r];
		c++;
	}
}

	// ignore the 0 and size-1 element in the row
int	check_view(int size, int *row)
{
	int	r;
	int	view;
	int	biggest;

	biggest = 0;
	view = 0;
	r = 1;
	while (r < size - 1)
	{
		if (row[r] > biggest)
		{
			biggest = row[r];
			view += 1;
		}
		r++;
	}
	return (view == row[0]);
}

int	check_rows(int size, int tab[size][size])
{
	int	l;

	l = 1;
	while (l < size - 1)
	{
		if (!check_view(size, tab[l]))
			return (0);
		l++;
	}
	return (1);
}

int	check_puzzle(int size, int tab[size][size])
{
	int	flag;

	flag = 1;
	if (flag && !check_rows(size, tab))
		flag = 0;
	transpose(size, tab);
	if (flag && !check_rows(size, tab))
		flag = 0;
	mirror(size, tab);
	if (flag && !check_rows(size, tab))
		flag = 0;
	transpose(size, tab);
	if (flag && !check_rows(size, tab))
		flag = 0;
	mirror(size, tab);
	return (flag);
}

/*
int	main(void)
{
	// int tab[4][4] = 
	// 		  { {0, 1, 1, 1},
	// 			{2, 0, 2, 2},
	// 			{3, 3, 0, 3},
	// 			{4, 4, 4, 0}};

	int tab[4][4] = 
			  { {1, 1, 1, 1},
				{2, 2, 2, 2},
				{3, 3, 2, 3},
				{4, 4, 4, 4}};

	transpose(4, tab);
	mirror(4, tab);
	printf("Result matrix is \n");
	for (int c = 0; c < 4; c++)
	{
		for (int r = 0; r < 4; r++)
		printf("%d ", tab[c][r]);
		printf("\n");
	}

	int valid[6][6] = 
			  { {0, 4, 3, 2, 1, 0},
				{4, 1, 2, 3, 4, 1},
				{3, 2, 3, 4, 1, 2},
				{2, 3, 4, 1, 2, 2},
				{1, 4, 1, 2, 3, 2},
				{0, 1, 2, 2, 2, 0}};
	int invalid[6][6] = 
			  { {0, 4, 3, 2, 1, 0},
				{4, 1, 2, 3, 4, 1},
				{3, 2, 3, 4, 1, 2},
				{2, 3, 4, 1, 2, 2},
				{1, 4, 1, 2, 3, 2},
				{0, 1, 2, 2, 2, 0}};
	int empty[6][6] = 
			  { {0, 4, 3, 2, 1, 0},
				{4, 0, 0, 0, 0, 1},
				{3, 0, 0, 0, 0, 2},
				{2, 0, 0, 0, 0, 2},
				{1, 0, 0, 0, 0, 2},
				{0, 1, 2, 2, 2, 0}};
	for (int c = 0; c < 6; c++)
	{
		for (int r = 0; r < 6; r++)
		printf("%d ", valid[c][r]);
		printf("\n");
	}

	// mirror(6, valid);
	// printf("\n");
	// for (int c = 0; c < 6; c++)
	// {
	// 	for (int r = 0; r < 6; r++)
	// 	printf("%d ", invalid[c][r]);
	// 	printf("\n");
	// }

	// check_duplicates(6, valid, 1, 1);
	// printf("check row\n"); 
	// printf("%d\n", check_rows(6, valid));

}
*/