/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znichola <znichola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:43:06 by znichola          #+#    #+#             */
/*   Updated: 2022/06/30 17:13:39 by znichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	count;

	count = 1;
	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i], tab[i - 1]) >= 0)
			count++;
		i++;
	}
	return (count == length || count == 0);
}

/*
int	ft_is_bigger(int a, int b)
{
	return (a - b);
}


int main(int ac, char **av)
{
	int *n = malloc(sizeof(int) * ac-1);
	for (int i = 0; i < ac - 1; i++)
		n[i] = i;
	// n[2] = 9;
	for (int i = 0; i < ac - 1; i++)
		printf("%d ", n[i]);
	printf("\n%d\n", ft_is_sort(n, ac-1, ft_is_bigger));
}
*/