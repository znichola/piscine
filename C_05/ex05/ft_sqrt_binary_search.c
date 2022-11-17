/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:07:53 by znichola          #+#    #+#             */
/*   Updated: 2022/06/20 11:47:53 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
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

int	ft_sqrt(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	r = binary_search(nb);
	if (nb == r * r)
		return (r);
	return (0);
}


int main(void)
{
	// int n = INT_MAX-20000;
	// printf("sqrt:%d		= %d\n", n, ft_sqrt(n));
	
	for (int i = 1; i < 5000000; i++)
	{
		int sqrt = ft_sqrt(i);
		if (sqrt != 0)
			// printf("%d, ", sqrt);
			printf("sqrt:%d		= %d\n", i, sqrt);
	}
}
