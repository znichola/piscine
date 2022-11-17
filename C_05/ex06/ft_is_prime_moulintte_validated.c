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

int	binary_search(int n)
{
	int	start;
	int	middle;
	int	end;
	int	result;

	start = 1;
	end = n / 2;
	while (start <= end)
	{
		middle = (start + end) / 2;
		if (middle * middle == n)
			return (middle);
		else if (middle * middle < n)
		{
			start = middle + 1;
			result = middle;
		}
		else
			end = middle - 1;
	}
	return (result);
}

int	ft_is_prime(int nb)
{
	int	sqrt_num;
	int	i;

	if (nb < 2)
		return (0);
	if (nb <= 3)
		return (1);
	sqrt_num = binary_search(nb) + 1;
	i = 2;
	while (i < sqrt_num)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
	int n = INT_MAX;
	printf("%d: %d", n, ft_is_prime(n));

	// for (int i = 0; i < n; i++)
	// {
	// 	int res = ft_is_prime(i);
	// 	if (res)
	// 		printf("%d, ", i);
	// }
}
*/