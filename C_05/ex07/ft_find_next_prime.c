/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:25:12 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 19:25:15 by znichola         ###   ########.fr       */
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
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	int n = 2147483647-13;
	printf("%d: %d", n, ft_find_next_prime(n));
	// int n = 100;
	// for (int i = 0; i < n; i++)
	// {
	// 	int res = ft_find_next_prime(i);
	// 	// if (res)
	// 		printf("%d: %d\n", i, res);
	// }
}
*/