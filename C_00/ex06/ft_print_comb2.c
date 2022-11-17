/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:55:34 by znichola          #+#    #+#             */
/*   Updated: 2022/06/09 15:57:10 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	concatenate_and_write(int x)
{
	char	ch[2];

	ch[0] = x / 10 + 48;
	ch[1] = x % 10 + 48;
	write(1, &ch, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	c;

	a = 0;
	while (a < 100)
	{
		c = a + 1;
		while (c < 100)
		{
			concatenate_and_write(a);
			write(1, " ", 1);
			concatenate_and_write(c);
			if (!(a == 98 && c == 99))
			{
				write(1, ", ", 2);
			}
			c ++;
		}
		a ++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
