/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 08:26:38 by znichola          #+#    #+#             */
/*   Updated: 2022/06/18 12:05:33 by dibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fillarray_zeros(int size, int tab[size][size]);

void	ft_printarraynumbers(int size, int tab[size][size], int *num)
{
	int	i;
	int	row;
	int	col;

	row = 0;
	i = -1;
	ft_fillarray_zeros(size, tab);
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (row == 0 && (col >= 1 && col < 5))
				tab[row][col] = num[i];
			if (col == 5 && (row >= 1 && row < 5))
				tab[row][col] = num[i];
			if (col == 0 && (row >= 1 && row < 5))
				tab[row][col] = num[i];
			if (row == 5 && (col >= 1 && col < 5))
				tab[row][col] = num[i];
			i ++;
			col++;
		}
		row++;
	}
}
