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

int	ft_log2(int n)
{
	int pow2[31] = {0, 1, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 
		8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 
		4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 
		536870912, 1073741824};
}

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if ((power == 0 && nb >= 0) || (power == 1 && nb > 0) || nb == 1)
		return (1);
	if ((power == 0 && nb <= 0) || nb == -1)
		return (-1);
	while (--power)
		nb *= n;
	return (nb);
}

// int	ft_sqrt(int nb)
// {
// 	int i;
// 	int ans;

// 	ans = 0;
// 	i = 2;
// 	while (ans < nb)
// 	{
		
// 		ans = i * i;
// 	}
// }

int main(void)
{
	for (int i = 0; i < 32; i++)
		printf("%d	%d\n", i, ft_iterative_power(2, i));
}