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

void	only_1(int size, int arr[size])
{
	while (--size >= 0)
		arr[size] = 1;
}

// Sieve of Eratosthenes
int	*sieved_primes(int n)
{
	static int	primes[470612];
	static int	buffer[200000];
	int	p;
	int	i;
	primes[0] = 2;

	p = 2;
	while (p * p < n)
	{
		if (buffer[p] == 1)
		{
			i = p * p;
			while (i <= n)
			{
				buffer[i] = 0;
				i += p;
			}
		}
		p++;
	}
	return (buffer);
}

// int	ft_is_prime(int nb)
// {
	
// }

int main(void)
{
	int n = 1000;
	int *arr;
	only_1(n, arr);

	arr = sieved_primes(n);
	for (int i = 0; i < n; i++)
	{
		printf("%d, ", arr[i]);
	}
}