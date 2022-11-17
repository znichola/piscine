/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:35:36 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 00:36:25 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

/*
int	main(void)
{
	for (int n = 10; n > -3; n--)
		printf("%d! = %d\n", n, ft_recursive_factorial(n));
}
*/
// 2 147 395 600
// 2 147 483 647
//    67 108 864
//       470 612