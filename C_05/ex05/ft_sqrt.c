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

int	ft_sqrt(int nb)
{
	int	r;
	int	i;

	i = 1;
	r = 0;
	if (nb <= 0 || nb > 2147395600)
		return (0);
	if (nb == 1)
		return (nb);
	if (nb == 4)
		return (2);
	while (r <= nb)
	{
		r = i * i;
		if (nb == r)
			return (i);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	// int n = 346921;
	// // int n = INT_MAX-10000;
	// printf("sqrt:%d		= %d\n", n, ft_sqrt(n));
	
	for (int i = 1; i < 5000000; i++)
	// for (int i = 1176078436; i < 2147395600+100; i++)
	{
		int sqrt = ft_sqrt(i);
		if (sqrt != 0)
			printf("sqrt:%d		= %d\n", i, sqrt);
	}
}
*/