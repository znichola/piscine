/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:48:48 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 17:48:49 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= (unsigned int) nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}

/*
int main(void)
{
	int n = INT_MAX;
	printf("%d: %d", n, ft_is_prime(n));
	// int n = 20000;
	// int printed = 0;
	// for (int i = 0; i < n; i++)
	// {
	// 	int res = ft_is_prime(i);
	// 	if (res)
	// 	{
	// 		printed++;
	// 		if (!(printed % 1000000))
	// 			printf("%d, \n", i);
	// 	}
	// }
}
*/
// 2123895971,
// 2145390523,
// ./a.out  2548.56s user 1.79s system 99% cpu 42:31.97 total
// 413158511
// 141650939
// 2147483645
// 2147483647