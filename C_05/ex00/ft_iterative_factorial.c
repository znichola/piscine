/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:15:20 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 00:32:14 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb-- > 1)
		n *= nb;
	return (n);
}

/*
int	main(void)
{
	for (int n = 10; n > -3; n--)
		printf("%d! = %d\n", n, ft_iterative_factorial(n));
}
*/
