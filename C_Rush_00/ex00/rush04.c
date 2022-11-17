/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efailla <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:57:27 by efailla           #+#    #+#             */
/*   Updated: 2022/06/11 16:58:55 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line(int x, char d, char m, char f);

void	rush(int x, int y)
{
	int	yi;

	if (x > 0 && y > 0)
	{
		write_line(x, 'A', 'B', 'C');
		yi = 2;
		while (yi < y)
		{
			write_line(x, 'B', ' ', 'B');
			yi++;
		}
		if (y > 1)
		{
			write_line(x, 'C', 'B', 'A');
		}
	}
}
