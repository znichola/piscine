/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efailla <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:05:59 by efailla           #+#    #+#             */
/*   Updated: 2022/06/11 16:58:57 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

// d = beginning     m = middle    f = end
void	write_line(int x, char d, char m, char f)
{
	int	xi;

	ft_putchar (d);
	if (x > 1)
	{
		xi = 2;
		while (xi < x)
		{
			ft_putchar(m);
			xi++;
		}
		ft_putchar(f);
	}
	ft_putchar('\n');
}
