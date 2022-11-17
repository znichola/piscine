/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:42:22 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 08:42:23 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*
int	main(void)
{
	// int n = 6;
	// int p = 0;
	for (int n = -3; n <= 3; n++)
	{
		for (int p = -3; p <= 3; p++)
			// printf("%d^%d=%d	", n, p, ft_recursive_power(n, p));
			printf("%d^%d=%f	", n, p, pow(n, p));

		printf("\n");
	}
}
*/