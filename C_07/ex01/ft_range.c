/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:59:42 by znichola          #+#    #+#             */
/*   Updated: 2022/06/22 11:59:43 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(*arr));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*
int	main(void)
{
	int mn = 0;
	int mx = 1;
	int *ar = ft_range(mn, mx);

	printf("%lu\n", sizeof(ar));
	for (int i = 0; i < mx-mn; i++)
		printf("%d, ", ar[i]);

}
*/