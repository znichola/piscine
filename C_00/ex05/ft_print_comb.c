/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:56:31 by znichola          #+#    #+#             */
/*   Updated: 2022/06/09 15:00:08 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	concatenate_and_write(char a, char b, char c)
{
	char	ch[3];

	ch[0] = a;
	ch[1] = b;
	ch[2] = c;
	write(1, &ch, 3);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 48 + 10)
	{
		b = a + 1;
		while (b < 48 + 10)
		{
			c = b + 1;
			while (c < 48 + 10)
			{
				concatenate_and_write(a, b, c);
				if (!(a == 48 + 7 && b == 48 + 8 && c == 48 + 9))
				{
					write(1, ", ", 2);
				}
				c ++;
			}
			b ++;
		}
		a ++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/