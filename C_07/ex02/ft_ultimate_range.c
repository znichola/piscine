/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:12:25 by znichola          #+#    #+#             */
/*   Updated: 2022/06/28 22:19:46 by znichola         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (max <= min)
		return (0);
	*range = ft_range(min, max);
	printf("%d\n",range[0][1]);
	printf("%d\n", range[0]);
	if (range == NULL)
		return (-1);
	return (max - min);
}


int	main(void)
{
	int mn = 1;
	int mx = 10;
	int *arr;

	int rt = ft_ultimate_range(&arr, mn, mx);

	for (int i = 0; i < mx-mn; i++)
		printf("%d, ", arr[i]);
}
