/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 07:26:10 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 07:26:13 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb *= n;
	return (nb);
}

/*
int	main(void)
{
	// int n = -1781;
	// int p = 0;

	// printf("%d^%d=%d	", n, p, ft_iterative_power(n, p));
	for (int n = -3; n <= 3; n++)
	{
		for (int p = -3; p <= 3; p++)
			printf("%d^%d=%d	", n, p, ft_iterative_power(n, p));
		printf("\n");
	}
}
*/